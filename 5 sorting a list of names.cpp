#include <stdio.h>
#include <string.h>

void sortNamesAscending(char names[][100], int n) {
    char temp[100];
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

void sortNamesDescending(char names[][100], int n) {
    char temp[100];
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(names[i], names[j]) < 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    int n, choice;
    char names[100][100];

    printf("Enter the number of names: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name %d: ", i+1);
        scanf("%s", names[i]);
    }

    printf("Enter sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            sortNamesAscending(names, n);
            break;
        case 2:
            sortNamesDescending(names, n);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    printf("Sorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

