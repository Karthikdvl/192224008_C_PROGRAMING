#include <stdio.h>

// function to convert decimal to binary
void decimalToBinary(int num) {
    int binaryNum[32], i = 0;
    
    // convert decimal to binary by continuously dividing by 2
    while (num > 0) {
        binaryNum[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    // print the binary number in reverse order
    printf("Binary number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
}

// main function
int main() {
    int decimalNum;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    
    decimalToBinary(decimalNum);
    
    return 0;
}

