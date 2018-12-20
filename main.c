#include <stdio.h>
#include "Graph.h"
#include "GraphColoring.h"

int main() {

    printf("%c",201);
    print(205,63);
    printf("%c\n%c",187,186);
    printf("\t\tWELCOME TO EXAM SCHEDULING PROGRAM\t\t");
    printf("%c\n%c",186,200);
    print(205,63);
    printf("%c\n",188);
    printf("\n This program will schedule the exams for the given set of students\n");
    print(196,68);
    printf("\n\n");
    Students *students=readFile("courses.txt"); //read from file
    if(students==NULL){
        printf("\nPlease check file name and file content!\n");
        return 0;
    }
    printStudents(students); 					//prints students with courses
    printf("\n");
    Graph *graph = createGraph(students); 		//constructs adjacency list
    printGraph(graph); 							//prints adjacency list
    printf("\n");
    graph = colorGraph(graph); 					//colors graph
    printColors(graph); 						//prints graph
    printf("\n");
    Periods *periods = createPeriods(graph); 	//creates periods from colored graph
    printPeriods(periods); 						//prints periods
    printf("\n");

    printf("%c",201);
    print(205,39);
    printf("%c\n%c",187,186);
    printf("\t\tGOOD BYE!\t\t");
    printf("%c\n%c",186,200);
    print(205,39);
    printf("%c\n",188);

    return 0;
}