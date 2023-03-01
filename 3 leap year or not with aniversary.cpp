#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int anniversaryYear, nextAnniversaryYear, previousAnniversaryYear;
    printf("Enter the year of the anniversary: ");
    scanf("%d", &anniversaryYear);
    if (isLeapYear(anniversaryYear)) {
        printf("%d is a leap year.\n", anniversaryYear);
        nextAnniversaryYear = anniversaryYear + 4;
        printf("The next anniversary year is %d.\n", nextAnniversaryYear);
    } else {
        printf("%d is not a leap year.\n", anniversaryYear);
        previousAnniversaryYear = anniversaryYear - (anniversaryYear % 4);
        printf("The previous anniversary year is %d.\n", previousAnniversaryYear);
    }
    return 0;
}

