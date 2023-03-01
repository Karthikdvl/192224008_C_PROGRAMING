#include <stdio.h>

// function to find the maximum and minimum values in an array
int* findMaxMin(int arr[], int n) {
    static int maxmin[2]; // to store maximum and minimum values
    
    int max = arr[0];
    int min = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    maxmin[0] = max;
    maxmin[1] = min;
    
    return maxmin;
}

// main function
int main() {
    int arr[10], n;
    int *maxmin;
    
    printf("Enter the number of elements in the array (max. 10): ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array:\n");
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    maxmin = findMaxMin(arr, n);
    
    printf("Maximum value in the array: %d\n", maxmin[0]);
    printf("Minimum value in the array: %d\n", maxmin[1]);
    
    return 0;
}

