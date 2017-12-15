
#include "Graph.h"
#include "GraphColoring.h"
#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

Graph * colorGraph(char *colors[]){

    Students *students=readFile("StudentList.txt");
    printStudents(students);
    printf("\n");

    Graph *graph = createGraph(students);
    printGraph(graph);
    printf("\n");

    depthFirstSearch(graph,graph->vertices, colors);
    printColors(graph);
    printf("\n");

    return graph;

}

Periods * createPeriods(Graph *graph){
    int i=1;
    char name[10];//="Period";
    char number[4];
    AdjCourse *temp=graph->vertices;
    Periods *head=NULL;
    Periods *periods=NULL;
    while (temp!=NULL){
        strcpy(name,"Period");
        if(findPeriodWithColor(head,temp->color)==NULL){
            itoa(i,number,10);
            strcat(name,number);
            head = addPeriod(head,name);
            periods = findPeriodWithName(head,name);
            periods->color=temp->color;
            periods->courses = addCourse(periods->courses,temp->head);
            i++;
        }
        else{
            periods=findPeriodWithColor(head,temp->color);
            periods->courses = addCourse(periods->courses,temp->head);
        }

        //i++;
        temp=temp->next;
    }
    return head;
}

void printPeriods(Periods *head){
    Periods *temp=head;
    Courses *courses;
    while (temp!=NULL){
        printf("%s : ",temp->periodName);
        courses=temp->courses;
        while(courses->next!=NULL){
            printf("%s, ",courses->name);
            courses=courses->next;
        }
        printf("%s\n",courses->name);

        temp=temp->next;
    }
}

Periods * findPeriodWithColor(Periods *head, char *color){
    Periods *temp = head;
    while (temp!=NULL){
        if(strcmp(temp->color,color)==0){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}
Periods * findPeriodWithName(Periods *head, char *name){
    Periods *temp = head;
    while (temp!=NULL){
        if(strcmp(temp->periodName,name)==0){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}


Periods * addPeriod(Periods *head, char *name){
    Periods *p, *q, *r;

    p = newPeriod(name);

    if (head == NULL) {
        return p;
    }
    else {
        q = head;
        while (q != NULL && strcmp(q->periodName, p->periodName) == -1) {
            r = q;
            q = q->next;
        }
        if (q != NULL && strcmp(q->periodName, p->periodName) == 0) {
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

Periods * newPeriod(char *name){
    Periods *new = (Periods*) malloc(sizeof(Periods));
    strcpy(new->periodName,name);
    new->color=NULL;
    new->courses=NULL;
    new->next=NULL;
    return new;
}

void depthFirstSearch(Graph *graph, AdjCourse *vertex, char *colors[]){
    //AdjCourse *vertex=graph->vertices;
    Courses *courses=vertex->vRelated;

    /*
     *      HOCAYA SOR!
     *  GRAPH OLUŞTURDUKTAN SONRA GRAPHE BAĞLI OLMAYAN
     *  VERTEX VARSA ONLARI DA COLORINGE EKLEYECEK MİYİZ?
     *
     *  EĞER EKLEYECEKSEK DFS MANTIĞI NASIL OLACAK?
     *  NE ZAMAN ORAYA GEÇECEK?
     *
     */
    if(vertex!=NULL){
        if(vertex->isVisited==0){

            char *renkler="color";
            char renk[10];
            char number[4];

            vertex->isVisited=1;
            int i=0;
            strcpy(renk,renkler);
            itoa(i,number,10);
            strcat(renk,number);
            while(hasColor(graph,vertex->vRelated, renk)/*i<100*/){
                /*strcpy(renk,renkler);
                itoa(i,number,10);
                strcat(renk,number);*/
                //printf("%s",renk);
                /*if(!hasColor(graph,vertex->vRelated, renk)){
                    vertex->color=renk;
                    break;
                }*/
                i++;
                strcpy(renk,renkler);
                itoa(i,number,10);
                strcat(renk,number);
            }
            printf("%s\n",renk);
            //vertex->color=renk;

            vertex->color=(char *)malloc(sizeof(char)*10);
            strcpy(vertex->color,renk);

            while (courses!=NULL){
                depthFirstSearch(graph,findVertex(graph,courses->name),colors);
                courses=courses->next;
            }

        }
    }
}

int hasColor(Graph *graph, Courses *courses, char *color){
    Courses *temp=courses;
    while (temp!=NULL){
        AdjCourse *course=findVertex(graph,temp->name);
        if(course->isVisited==1){
            if(strcmp(course->color,color)==0){
                return 1;//it means another vertex has same color
            }
        }
        temp=temp->next;
    }

    return 0;
}

void printColors(Graph *graph){
    AdjCourse *temp = graph->vertices;
    while (temp!=NULL){
        printf("%s = %s\n",temp->head,temp->color);
        temp=temp->next;
    }
}