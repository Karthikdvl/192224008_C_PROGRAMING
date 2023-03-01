#include <stdio.h>

// function to calculate aggregate and return grade
char calculateGrade(float aggregate) {
    char grade;
    
    if (aggregate >= 75) {
        grade = 'A';
    } else if (aggregate >= 60) {
        grade = 'B';
    } else if (aggregate >= 50) {
        grade = 'C';
    } else if (aggregate >= 40) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    
    return grade;
}

// main function
int main() {
    float marks[4], total = 0, aggregate;
    
    printf("Enter the marks in four subjects:\n");
    
    for (int i = 0; i < 4; i++) {
        printf("Subject %d: ", i+1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    
    aggregate = total / 4;
    
    printf("Total marks: %.2f\n", total);
    printf("Aggregate: %.2f%%\n", aggregate);
    printf("Grade: %c\n", calculateGrade(aggregate));
    
    return 0;
}

