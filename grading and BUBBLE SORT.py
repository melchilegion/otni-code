#include <stdio.h>

// Function to calculate the power of a number
long long calculate_power(int base, int exponent) {
    if (exponent < 0) {
        // Power lower than 0 returns 0
        return 0;
    }

    long long result = 1; // Initialize result to 1

    while (exponent > 0) {
        result *= base; // Multiply result by base
        exponent--; // Decrement exponent
    }

    return result;
}

int main() {
    int base, exponent;
    printf("Enter the base number: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    long long answer = calculate_power(base, exponent);
    printf("Answer = %lld\n", answer);

    return 0;
}
