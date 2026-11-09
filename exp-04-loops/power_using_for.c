#include <stdio.h>

int main(void) {
    long long base, result = 1;
    int exponent, i;
    printf("Enter a base and a non-negative exponent: ");
    if (scanf("%lld %d", &base, &exponent) != 2 || exponent < 0) return 1;
    for (i = 0; i < exponent; i++) result *= base;
    printf("%lld^%d = %lld\n", base, exponent, result);
    return 0;
}
