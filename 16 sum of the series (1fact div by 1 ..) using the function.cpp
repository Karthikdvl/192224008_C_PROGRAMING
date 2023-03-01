#include <stdio.h>
#include <math.h>

int factorial(int n) {
	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main() {
	int n;
	printf("Enter the value of N: ");
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += factorial(i) / i;
}
	printf("The sum of the series 1!/1 + 2!/2 + ... + %d/%d is: %d\n",n,n, sum);
	return 0;
}
