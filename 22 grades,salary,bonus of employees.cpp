#include <stdio.h>

int main() {
    float salary, bonus, total_salary;
    char grade;

    printf("Enter the salary: ");
    scanf("%f", &salary);

    printf("Enter the grade (A/B): ");
    scanf(" %c", &grade);

    if (salary < 10000) {
        bonus = salary * 0.07;
    } else {
        bonus = (grade == 'A') ? salary * 0.05 : salary * 0.1;
    }

    total_salary = salary + bonus;

    printf("Salary: $%.2f\n", salary);
    printf("Bonus: $%.2f\n", bonus);
    printf("Total Salary: $%.2f\n", total_salary);

    return 0;
}

