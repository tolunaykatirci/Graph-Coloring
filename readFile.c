#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readFile.h"

Students * readFile(char *filename){
    FILE *file;
    file = fopen(filename, "r");

    char dataline[128];
    Students *all=NULL;
    while( fgets(dataline, 128, file)!=NULL ){
        all=createStudentNode(all, dataline);
    }
    //printStudents(all);

    return all;

}

Students * addStudent(Students *head, char *name){
    Students *p, *q, *r;
    p = newStudent(name);

    if (head == NULL) {
        return p;
    }
    else {
        q = head;
        while (q != NULL && strcmp(q->name, p->name) == -1) {
            r = q;
            q = q->next;
        }
        if (q != NULL && strcmp(q->name, p->name) == 0) {
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

    /*if(head==NULL){
        Students *newstd = (Students *)malloc(sizeof(Students));
        strcpy(newstd->name,name);
        newstd->courses=NULL;
        newstd->next=NULL;
        head=newstd;
        return head;
    }
    Students *current = head;
    while(current->next != NULL && strcmp(current->name,name)!=0){
        current = current->next;
    }
    if (strcmp(current->name,name)==0){
        return head;
        //eklenmedi-zaten varmis
    }
    else{
        Students *newstd = (Students *)malloc(sizeof(Students));
        strcpy(newstd->name,name);
        newstd->courses=NULL;
        newstd->next=NULL;
        current->next=newstd;
        return head;
    }*/
}

Courses * addCourse(Courses *head, char *name){
    Courses *p, *q, *r;
    p = newCourse(name);

    if (head == NULL) {
        return p;
    }
    else {
        q = head;
        while (q != NULL && strcmp(q->name, p->name) == -1) {
            r = q;
            q = q->next;
        }
        if (q != NULL && strcmp(q->name, p->name) == 0) {
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
Courses * newCourse(char *name){
    Courses *newstd = (Courses *)malloc(sizeof(Courses));
    strcpy(newstd->name,name);
    newstd->next=NULL;
    return newstd;
}

Students * newStudent(char *name){
    Students *newstd = (Students *)malloc(sizeof(Students));
    strcpy(newstd->name,name);
    newstd->courses=NULL;
    newstd->next=NULL;
    return newstd;
}
void printStudents(Students *headS){
    Students *currentS=headS;
    Courses *currentC;
    printf(" Students\t  Courses\n");
    print(196,16);
    printf(" ");
    print(196,16);
    printf("\n");
    while(currentS!=NULL){
        printf("%s\t",currentS->name);
        currentC=currentS->courses;
        while (currentC->next!=NULL){
            printf("%s,",currentC->name);
            currentC=currentC->next;
        }
        printf("%s\n",currentC->name);
        currentS=currentS->next;
    }
}

int findLongestStudentName(Students *students){
    int i=0;
    Students *temp = students;
    while(temp!=NULL){
        if(strlen(temp->name)>i){
            i=strlen(temp->name);
        }
        temp=temp->next;
    }
    return i;
}

Students * createStudentNode(Students *head, char *dataline){

    char *token;
    char currentWord[50];
    Students *student1 = NULL;
    Courses *course1 = NULL;

    token = strtok(dataline,":");
    strcpy(currentWord,token);

    head = addStudent(head,startCheck(endCheck(currentWord)));
    student1=findStudent(head,currentWord);

    token = strtok(NULL,":");
    strcpy(currentWord,token);
    token = strtok(currentWord,",");
    while( token != NULL ) {
        course1 = addCourse(course1,startCheck(endCheck(token)));
        //printf( " %s", token );
        token = strtok(NULL, ",");
    }

    student1->courses = course1;


    return head;
}
Students * findStudent(Students *head, char *name){

    Students *temp=head;
    while(temp!=NULL){
        if(strcmp(temp->name,name)==0){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}
char * startCheck(char *word){
    if(!((word[0]>='0' && word[0]<='9') || (word[0]>='A' && word[0]<='Z') || (word[0]>='a' && word[0]<='z'))){

        return (startCheck(word+1));
    }
    return word;
}
char * endCheck(char *word){
    int i=strlen(word)-1;
    if(!((word[i]>='0' && word[i]<='9') || (word[i]>='A' && word[i]<='Z') || (word[i]>='a' && word[i]<='z'))){
        word[i]='\0';
        return (endCheck(word));
    }
    return word;
}

void print(char c,int i){
    while(i>0){
        printf("%c",c);
        i--;
    }
}
