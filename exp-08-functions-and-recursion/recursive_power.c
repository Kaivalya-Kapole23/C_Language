#include <stdio.h>

long long power(long long base, int exponent) {
    if (exponent == 0) return 1;
    return base * power(base, exponent - 1);
}

int main(void) {
    long long base;
    int exponent;
    printf("Enter base and non-negative exponent: ");
    if (scanf("%lld %d", &base, &exponent) != 2 || exponent < 0) return 1;
    printf("Result = %lld\n", power(base, exponent));
    return 0;
}
