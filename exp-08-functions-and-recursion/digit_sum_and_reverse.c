#include <stdio.h>

int digit_sum(int n) {
    int sum = 0;
    if (n < 0) n = -n;
    do { sum += n % 10; n /= 10; } while (n != 0);
    return sum;
}

long long reverse_number(int n) {
    long long reversed = 0;
    int sign = n < 0 ? -1 : 1;
    if (n < 0) n = -n;
    do { reversed = reversed * 10 + n % 10; n /= 10; } while (n != 0);
    return sign * reversed;
}

int main(void) {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("Sum of digits = %d\nReverse = %lld\n", digit_sum(n), reverse_number(n));
    return 0;
}
