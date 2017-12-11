//
// Created by tolun on 03.12.2017.
//

#ifndef CSE225PROJECT3_READFILE_H
#define CSE225PROJECT3_READFILE_H

struct Courses{
    char name[30];
    struct Courses *next;
};
typedef struct Courses Courses;

struct Students{
    char name[50];
    struct Courses *courses;
    struct Students *next;
};
typedef struct Students Students;

Students * addStudent(Students *head, char *name);
Courses * addCourse(Courses *head, char *name);
void printStudents(Students *headS);
Students * readFile(char *filename);
Students * createStudentNode(Students *head, char *dataline);
Students * findStudent(Students *head, char *name);
char * startCheck(char *word);
char * endCheck(char *word);
Courses * newCourse(char *name);

#endif //CSE225PROJECT3_READFILE_H
