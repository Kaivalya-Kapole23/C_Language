#include <stdio.h>

#define MAX 100

int main(void) {
    int a[MAX], n, i, pass, temp;
    printf("Enter array size (1-%d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) return 1;
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1;
    for (pass = 0; pass < n - 1; pass++)
        for (i = 0; i < n - 1 - pass; i++)
            if (a[i] > a[i + 1]) { temp = a[i]; a[i] = a[i + 1]; a[i + 1] = temp; }
    printf("Sorted array: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
