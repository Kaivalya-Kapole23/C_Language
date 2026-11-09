#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    printf("Sum = %d\nDifference = %d\nProduct = %d\n", a + b, a - b, a * b);
    if (b != 0) printf("Quotient = %.2f\n", (float)a / b);
    else printf("Quotient is undefined (division by zero).\n");
    return 0;
}
