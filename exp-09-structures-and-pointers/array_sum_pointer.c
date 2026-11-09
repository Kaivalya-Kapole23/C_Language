#include <stdio.h>

#define MAX 100

int main(void) {
    int a[MAX], n, i;
    long long sum = 0;
    int *p;
    printf("Enter array size (1-%d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) return 1;
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1;
    for (p = a; p < a + n; p++) sum += *p;
    printf("Sum = %lld\n", sum);
    return 0;
}
