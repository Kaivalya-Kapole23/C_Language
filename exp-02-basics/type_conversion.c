#include <stdio.h>

int main(void) {
    float decimal;
    int whole;
    printf("Enter a decimal number: ");
    if (scanf("%f", &decimal) != 1) return 1;
    whole = (int)decimal;
    printf("Float %.2f converted to int = %d\n", decimal, whole);
    printf("Int %d converted to float = %.2f\n", whole, (float)whole);
    return 0;
}
