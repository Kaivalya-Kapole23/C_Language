#include <stdio.h>

#define MAX 100

int main(void) {
    int a[MAX], n, i, temp;
    printf("Enter array size (1-%d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) return 1;
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1;
    for (i = 0; i < n / 2; i++) { temp = a[i]; a[i] = a[n - 1 - i]; a[n - 1 - i] = temp; }
    printf("Reversed array: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
