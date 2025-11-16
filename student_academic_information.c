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
    struct Student stu[100];
        int choice;
    printf("\t\tUnited Group Of Institute\n");
    printf("Choose the function:-\n");
    while(1){
    printf("1.Add Student\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: addStudent(stu);
                break;
        default: printf("invalid choice"); 
    }
}
    return 0;
}

void addStudent(struct Student stu[]) {
    static int count = 0;
    int i;
    float sum = 0.0f;

    printf("\nAdding student #%d\n", count + 1);

    printf("Enter roll number: ");
    scanf("%d", &stu[count].roll);

    while (getchar() != '\n');

    printf("Enter name: ");
    fgets(stu[count].name, sizeof stu[count].name, stdin);
    stu[count].name[strcspn(stu[count].name, "\n")] = '\0';

    printf("Enter course: ");
    fgets(stu[count].course, sizeof stu[count].course, stdin);
        stu[count].course[strcspn(stu[count].course, "\n")] = '\0';

    printf("Enter city: ");
    fgets(stu[count].city, sizeof stu[count].city, stdin);
        stu[count].city[strcspn(stu[count].city, "\n")] = '\0';

    printf("Enter email: ");
    fgets(stu[count].email, sizeof stu[count].email, stdin);
        stu[count].email[strcspn(stu[count].email, "\n")] = '\0';

    for (i = 0; i < 5; ++i) {
        printf("Enter mark %d: ", i + 1);
        if (scanf("%f", &stu[count].marks[i]) != 1);
        sum += stu[count].marks[i];
    }

    stu[count].percentage = sum / 5.0f;

    if (stu[count].percentage >= 90.0f) stu[count].grade = 'A';
    else if (stu[count].percentage >= 80.0f) stu[count].grade = 'B';
    else if (stu[count].percentage >= 70.0f) stu[count].grade = 'C';
    else if (stu[count].percentage >= 60.0f) stu[count].grade = 'D';
    else stu[count].grade = 'F';

    printf("\nStudent added successfully:\n");
    printf("Roll: %d\nName: %s\nCourse: %s\nCity: %s\nEmail: %s\nPercentage: %.2f%%\nGrade: %c\n\n",stu[count].roll,stu[count].name,stu[count].course,stu[count].city,stu[count].email, stu[count].percentage,stu[count].grade);

    count++;
}

//soon