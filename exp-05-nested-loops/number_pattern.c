#include <stdio.h>

int main(void) {
    int n, row, value;
    printf("Enter a positive number: ");
    if (scanf("%d", &n) != 1 || n < 1) return 1;
    for (row = 0; row < n; row++) {
        for (value = n; value >= n - row; value--) printf("%d", value);
        printf("\n");
    }
    return 0;
}
