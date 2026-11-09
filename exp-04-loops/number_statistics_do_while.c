#include <stdio.h>

int main(void) {
    int n, positive = 0, negative = 0, zero = 0;
    char again;
    do {
        printf("Enter an integer: ");
        if (scanf("%d", &n) != 1) return 1;
        if (n > 0) positive++; else if (n < 0) negative++; else zero++;
        printf("Continue? (y/n): ");
        if (scanf(" %c", &again) != 1) return 1;
    } while (again == 'y' || again == 'Y');
    printf("Positive: %d\nNegative: %d\nZeros: %d\n", positive, negative, zero);
    return 0;
}
