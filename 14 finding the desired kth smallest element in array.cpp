#include <stdio.h>

int kth_smallest(int arr[], int n, int k) {
    int i, j, temp, kth_element;

    // Sort the array using bubble sort
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Find the kth smallest element
    kth_element = arr[k-1];

    return kth_element;
}

int main() {
    int arr[100], n, k, kth_element;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    kth_element = kth_smallest(arr, n, k);

    printf("The %dth smallest element in the array is: %d\n", k, kth_element);

    return 0;
}

