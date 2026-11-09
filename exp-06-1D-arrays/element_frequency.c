#include <stdio.h>

#define MAX 100

int main(void) {
    int a[MAX], n, target, i, count = 0;
    printf("Enter array size (1-%d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) return 1;
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1;
    printf("Enter element to count: ");
    if (scanf("%d", &target) != 1) return 1;
    for (i = 0; i < n; i++) if (a[i] == target) count++;
    printf("%d occurs %d time(s).\n", target, count);
    return 0;
}
