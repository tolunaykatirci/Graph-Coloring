//
// Created by tolun on 03.12.2017.
//
#include <stdio.h>
#include <stdlib.h>
#include <mem.h>
#include "Graph.h"

Graph * createGraph(Students *students){
    Graph *graph = (Graph*)malloc(sizeof(Graph));
    graph->vertices=NULL;
    Students *temp = students;
    Courses *course, *coursehead;
    AdjCourse *vertex;

    while(temp!=NULL){
        coursehead=temp->courses;
        while(coursehead!=NULL){
            course=coursehead;
            while(course!=NULL){
                //add course to graph
                graph->vertices = addVertex(graph,course->name);
                if(strcmp(course->name,coursehead->name)!=0){
                    addEdge(graph,coursehead->name,course->name);
                }
                course=course->next;
            }
            coursehead=coursehead->next;
        }
        temp=temp->next;
    }
    return graph;
}

AdjCourse * newVertex(char *name){
    AdjCourse *new = (AdjCourse*) malloc(sizeof(AdjCourse));
    strcpy(new->head,name);
    new->color="white";
    new->isVisited=0;
    new->vRelated=NULL;
    new->next=NULL;
    return new;
}

AdjCourse * findVertex(Graph *graph, char *name){
    AdjCourse *courses = graph->vertices;
    while(courses!=NULL){
        if(strcmp(courses->head,name)==0){
            return courses;
        }
        courses=courses->next;
    }
    return NULL;
}

void addEdge(Graph *graph, char *src, char *dest){

    AdjCourse *source = findVertex(graph,src);
    if(findInRelated(source,dest)==NULL){
        source->vRelated = addCourse(source->vRelated,dest);
    }
    source=findVertex(graph,dest);
    if(findInRelated(source,src)==NULL){
        source->vRelated = addCourse(source->vRelated,src);
    }
}

AdjCourse *  addVertex(Graph *graph, char *name) {
    AdjCourse *p, *q, *r;
    AdjCourse *head = graph->vertices;

    p = newVertex(name);

    if (head == NULL) {
        return p;
    } else {
        q = head;
        while (q != NULL && strcmp(q->head, p->head) == -1) {
            r = q;
            q = q->next;
        }
        if (q != NULL && strcmp(q->head, p->head) == 0) {
            //printf("existent");
            return head;
        }
        if (q != NULL) {
            p->next = q;
        }
        if (q == head) {
            head = p;
        } else {
            r->next = p;
        }
    }
    return head;
}

Courses * findInRelated(AdjCourse *source, char *name){
    Courses *temp = source->vRelated;

    while(temp!=NULL){
        if(strcmp(temp->name,name)==0){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}
void printGraph(Graph *graph){
    AdjCourse *vertex=graph->vertices;
    Courses *edge;

    while(vertex!=NULL){
        edge=vertex->vRelated;
        printf("%s->",vertex->head);
        while (edge->next!=NULL){
            printf("%s-",edge->name);
            edge=edge->next;
        }
        printf("%s\n",edge->name);
        vertex=vertex->next;
    }
}
