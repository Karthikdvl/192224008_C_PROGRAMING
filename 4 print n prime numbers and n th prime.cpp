#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, count = 0, current = 2;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The first %d prime numbers are:\n", n);
    while (count < n) {
        if (isPrime(current)) {
            printf("%d ", current);
            count++;
        }
        current++;
    }
    printf("\n");
    printf("The %dth prime number is: ", n);
    count = 0;
    current = 2;
    while (count < n) {
        if (isPrime(current)) {
            count++;
            if (count == n) {
                printf("%d", current);
            }
        }
        current++;
    }
    printf("\n");
    return 0;
}

