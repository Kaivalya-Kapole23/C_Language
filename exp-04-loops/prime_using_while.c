#include <stdio.h>

int main(void) {
    int n, divisor = 2, prime = 1;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 1) return 1;
    if (n == 1) prime = 0;
    while (divisor <= n / divisor) {
        if (n % divisor == 0) { prime = 0; break; }
        divisor++;
    }
    printf("%d is %sprime.\n", n, prime ? "" : "not ");
    return 0;
}
