//
// Created by tolun on 10.12.2017.
//

#ifndef CSE225PROJECT3_GRAPHCOLORING_H
#define CSE225PROJECT3_GRAPHCOLORING_H

#include "Graph.h"

struct Periods{
    char periodName[20];
    char *color;
    Courses *courses;
    struct  Periods *next;
};
typedef struct Periods Periods;

int hasColor(Graph *graph, Courses *courses, char *color);
void depthFirstSearch(Graph *graph, AdjCourse *vertex);
void printColors(Graph *graph);
Periods * findPeriodWithColor(Periods *head, char *color);
Periods * findPeriodWithName(Periods *head, char *name);
Periods * addPeriod(Periods *head, char *name);
Graph * colorGraph(Graph *graph);
Periods * createPeriods(Graph *graph);
void printPeriods(Periods *head);
Periods * newPeriod(char *name);
#endif //CSE225PROJECT3_GRAPHCOLORİNG_H
