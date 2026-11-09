#include <stdio.h>

#define MAX 100

int main(void) {
    int a[MAX], n, target, i, index = -1;
    printf("Enter array size (1-%d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) return 1;
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1;
    printf("Enter value to search: ");
    if (scanf("%d", &target) != 1) return 1;
    for (i = 0; i < n; i++) if (a[i] == target) { index = i; break; }
    if (index >= 0) printf("Found at index %d.\n", index);
    else printf("Element not found.\n");
    return 0;
}
