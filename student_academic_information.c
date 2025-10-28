//it is difficult to make this project so i decide to make 1 by 1 function like any company provides updates and feachers i will upload new functions.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student {
    int roll;
    char name[50];
    char course[30];
    char city[30];
    char email[50];
    float marks[5];
    float percentage;
    char grade;
};

void addStudent(struct Student stu[]);

int main() {
        int choice;
    printf("\t\tUnited Group Of Institute\n");
    printf("Choose the function:-\n");
    while(1){
    printf("1.Add Student\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: addStudent();
                break;
        default: printf("invalid choice"); 
    }
}
    return 0;
}