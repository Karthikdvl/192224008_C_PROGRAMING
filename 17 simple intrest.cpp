#include <stdio.h>

float calculate_simple_interest(float principle, float rate, float time) {
    float interest = (principle * rate * time) / 100;
    return interest;
}

int main() {
    float principle, rate, time, interest;

    printf("Enter the principle amount: ");
    scanf("%f", &principle);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    interest = calculate_simple_interest(principle, rate, time);

    printf("Simple interest = %.2f\n", interest);

    return 0;
}

