#include <stdio.h>

int main() {
    int arr[100], n, i, pos, x;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &x);

    printf("Enter the position to insert the element (0-indexed): ");
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    for (i = n-1; i >= pos; i--) {
        arr[i+1] = arr[i];
    }
    arr[pos] = x;
    n++;

    printf("New array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

