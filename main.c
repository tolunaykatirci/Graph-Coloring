#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"
#include "GraphColoring.h"
#include "readFile.h"

// Driver program to test above functions
int main() {

/*    Students *students = readFile("courses.txt");
    printStudents(students);

    printf("\n");

    Graph *graph = createGraph(students);
    printGraph(graph);*/

    char *colors[5];
    colors[0]="yellow";
    colors[1]="red";
    colors[2]="green";
    colors[3]="black";
    colors[4]="pink";

    Graph *graph = colorGraph(colors);
    Periods *periods = createPeriods(graph);
    printPeriods(periods);


    return 0;
}