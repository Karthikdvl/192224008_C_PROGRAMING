#include <stdio.h>

// Define a struct for student information
struct Student {
    int rollNumber;
    int marks;
    char grade;
};

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    // Create an array of n Student structures
    struct Student students[n];
    
    // Take input from user for each student's roll number and marks
    for (i = 0; i < n; i++) {
        printf("Enter roll number and marks for student %d: ", i+1);
        scanf("%d %d", &students[i].rollNumber, &students[i].marks);
    }
    
    // Calculate grades for each student and store in the grade field of the struct
    for (i = 0; i < n; i++) {
        if (students[i].marks >= 90 && students[i].marks <= 100) {
            students[i].grade = 'A';
        } else if (students[i].marks >= 78 && students[i].marks <= 89) {
            students[i].grade = 'B';
        } else if (students[i].marks >= 65 && students[i].marks <= 77) {
            students[i].grade = 'C';
        } else if (students[i].marks >= 50 && students[i].marks <= 64) {
            students[i].grade = 'D';
        } else {
            students[i].grade = 'F';
        }
    }
    
    // Print the number of students in each grade
    int numA = 0, numB = 0, numC = 0, numD = 0, numF = 0;
    for (i = 0; i < n; i++) {
        switch (students[i].grade) {
            case 'A':
                numA++;
                break;
            case 'B':
                numB++;
                break;
            case 'C':
                numC++;
                break;
            case 'D':
                numD++;
                break;
            case 'F':
                numF++;
                break;
            default:
                break;
        }
    }
    
    printf("Number of students in each grade:\n");
    printf("A: %d\n", numA);
    printf("B: %d\n", numB);
    printf("C: %d\n", numC);
    printf("D: %d\n", numD);
    printf("F: %d\n", numF);
    
    return 0;
}
