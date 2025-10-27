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
void displayAll(struct Student stu[], int count);
int searchStudent(struct Student stu[], int count, int roll);
void updateStudent(struct Student stu[], int count);
void deleteStudent(struct Student stu[], int *count);
void generateReportCard(struct Student stu[], int index);
int saveToFile(struct Student stu[], int count);
int loadFromFile(struct Student stu[], int *count);


struct Student *stu;
int count = 0;
int capacity = 10;

int main() {
    int choice;
    struct Student *stu = malloc(10 * sizeof(struct Student));
    stu = realloc(stu, 20* sizeof(struct Student));
  
    printf("\t\tUnited Group Of Institute\n");
    printf("Choose the function:-\n");
    while(1){
    printf("1.Add Student\n");
    printf("2.Display All\n");
    printf("3.Search Student\n");
    printf("4.Update Student\n");
    printf("5.Delete Student\n");
    printf("6.Generate Report Card\n");
    printf("7.Save To File\n");
    printf("8.Load from file\n");
    printf("9.Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: addStudent();
                break;
        case 2: displayAll(); 
                break;
        case 3: printf("Enter roll no.:");
                scanf("%d",&stu.roll);
                searchStudent(stu.roll); 
                break;
        case 4: updateStudent(); 
                break;
        case 5: deleteStudent(); 
                break;
        case 6: generateReportCard(); 
                break;
        case 7: savetofile(); 
                break;
        case 8: loadfromfile(); 
                break;
        case 9: exit(0); 
                break;
        default: printf("invalid choice"); 
    }
}
    return 0;
}