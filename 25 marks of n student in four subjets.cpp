#include <stdio.h>

struct Student {
    char name[50];
    int marks[4];
    float total;
    float aggregate;
    char grade[10];
};

void calculateAggregate(struct Student *s) {
    s->total = 0;
    for(int i = 0; i < 4; i++) {
        s->total += s->marks[i];
    }
    s->aggregate = (s->total / 400) * 100;
}

void assignGrade(struct Student *s) {
    if(s->aggregate >= 75) {
        sprintf(s->grade, "Distinction");
    }
    else if(s->aggregate >= 60 && s->aggregate < 75) {
        sprintf(s->grade, "First Division");
    }
    else if(s->aggregate >= 50 && s->aggregate < 60) {
        sprintf(s->grade, "Second Division");
    }
    else if(s->aggregate >= 40 && s->aggregate < 50) {
        sprintf(s->grade, "Third Division");
    }
    else {
        sprintf(s->grade, "Fail");
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);

        for(int j = 0; j < 4; j++) {
            printf("Enter marks in subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }

        calculateAggregate(&students[i]);
        assignGrade(&students[i]);
    }

    printf("\n\n---------------------------------------\n");
    printf("Name\t\tTotal\t\tAggregate\tGrade\n");
    printf("---------------------------------------\n");

    for(int i = 0; i < n; i++) {
        printf("%-15s %-10.2f %-10.2f %s\n", students[i].name, students[i].total, students[i].aggregate, students[i].grade);
    }

    return 0;
}

