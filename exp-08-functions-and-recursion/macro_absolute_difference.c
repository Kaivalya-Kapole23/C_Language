#include <stdio.h>

#define ABS_DIFF(a, b) ((a) > (b) ? (a) - (b) : (b) - (a))

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    printf("Absolute difference = %d\n", ABS_DIFF(a, b));
    return 0;
}
