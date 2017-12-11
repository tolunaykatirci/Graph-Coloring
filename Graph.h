//
// Created by tolun on 03.12.2017.
//

#ifndef CSE225PROJECT3_GRAPH_H
#define CSE225PROJECT3_GRAPH_H

#include "readFile.h"

struct AdjCourse{
    char head[50];
    char *color;
    int isVisited;
    Courses *vRelated;
    struct AdjCourse *next;
};
typedef struct AdjCourse AdjCourse;

struct Graph {
    struct AdjCourse *vertices;
};
typedef struct Graph Graph;


Graph * createGraph(Students *students);
AdjCourse * newVertex(char *name);
AdjCourse * findVertex(Graph *graph, char *name);
Courses * findInRelated(AdjCourse *source, char *name);
void addEdge(Graph *graph, char *src, char *dest);
AdjCourse *  addVertex(Graph *graph, char *name);
void printGraph(Graph *graph);

#endif //CSE225PROJECT3_GRAPH_H
