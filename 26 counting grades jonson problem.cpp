#include <stdio.h>

struct student {
    int roll_no;
    int marks;
    char grade;
};

int main() {
    int n, i, a_count = 0, b_count = 0, c_count = 0, d_count = 0, f_count = 0;
    struct student s[100];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter student roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter student marks: ");
        scanf("%d", &s[i].marks);

        if (s[i].marks >= 90 && s[i].marks <= 100) {
            s[i].grade = 'A';
            a_count++;
        } else if (s[i].marks >= 78 && s[i].marks <= 89) {
            s[i].grade = 'B';
            b_count++;
        } else if (s[i].marks >= 65 && s[i].marks <= 77) {
            s[i].grade = 'C';
            c_count++;
        } else if (s[i].marks >= 50 && s[i].marks <= 64) {
            s[i].grade = 'D';
            d_count++;
        } else {
            s[i].grade = 'F';
            f_count++;
        }
    }

    printf("\nGrades of %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Roll No.: %d\tMarks: %d\tGrade: %c\n", s[i].roll_no, s[i].marks, s[i].grade);
    }

    printf("\nNumber of students with grade A: %d\n", a_count);
    printf("Number of students with grade B: %d\n", b_count);
    printf("Number of students with grade C: %d\n", c_count);
    printf("Number of students with grade D: %d\n", d_count);
    printf("Number of students with grade F: %d\n", f_count);

    return 0;
}
