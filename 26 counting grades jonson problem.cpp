#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int grade;
};

int main() {
    int n, i;
    int numA = 0, numB = 0, numC = 0, numD = 0, numF = 0;
    struct student *students;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    students = (struct student*) malloc(n * sizeof(struct student));

    for (i = 0; i < n; i++) {
        printf("Enter the student number for student %d: ", i+1);
        scanf("%d", &(students[i].id));

        printf("Enter the number grade for student %d: ", i+1);
        scanf("%d", &(students[i].grade));

        if (students[i].grade >= 90) {
            numA++;
        } else if (students[i].grade >= 78) {
            numB++;
        } else if (students[i].grade >= 65) {
            numC++;
        } else if (students[i].grade >= 50) {
            numD++;
        } else {
            numF++;
        }
    }

    printf("\n\n");

    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i+1);
        printf("Student number: %d\n", students[i].id);
        printf("Number grade: %d\n", students[i].grade);
        printf("\n");
    }

    printf("Number of As: %d\n", numA);
    printf("Number of Bs: %d\n", numB);
    printf("Number of Cs: %d\n", numC);
    printf("Number of Ds: %d\n", numD);
    printf("Number of Fs: %d\n", numF);

    free(students);

    return 0;
}

