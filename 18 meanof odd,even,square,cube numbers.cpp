#include <stdio.h>
#include <math.h>

float calculate_mean(int start, int end, int type) {
    int i, count = 0;
    float sum = 0;

    for (i = start; i <= end; i++) {
        switch (type) {
            case 1:
                if (i % 2 != 0) {
                    sum += i;
                    count++;
                }
                break;
            case 2:
                if (i % 2 == 0) {
                    sum += i;
                    count++;
                }
                break;
            case 3:
                sum += pow(i, 2);
                count++;
                break;
            case 4:
                sum += pow(i, 3);
                count++;
                break;
            default:
                break;
        }
    }

    float mean = sum / count;
    return mean;
}

int main() {
    int n, type;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Enter the type of sequence:\n1. Odd numbers\n2. Even numbers\n3. Square numbers\n4. Cube numbers\n");
    scanf("%d", &type);

    switch (type) {
        case 1:
            printf("Mean of first %d odd numbers: %.2f\n", n, calculate_mean(1, n * 2, type));
            break;
        case 2:
            printf("Mean of first %d even numbers: %.2f\n", n, calculate_mean(1, n * 2, type));
            break;
        case 3:
            printf("Mean of first %d square numbers: %.2f\n", n, calculate_mean(1, n, type));
            break;
        case 4:
            printf("Mean of first %d cube numbers: %.2f\n", n, calculate_mean(1, n, type));
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}

