#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n-1, mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[100], n, x, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    pos = binarySearch(arr, n, x);

    if (pos == -1) {
        printf("Element not found!\n");
    } else {
        printf("Element found at position %d\n", pos+1);
    }

    return 0;
}

