#include <stdio.h>

#define MAX 20

int main(void) {
    int a[MAX][MAX], n, i, j, symmetric = 1;
    printf("Enter square matrix size (1-%d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) return 1;
    printf("Enter %d matrix elements row by row: ", n * n);
    for (i = 0; i < n; i++) for (j = 0; j < n; j++) if (scanf("%d", &a[i][j]) != 1) return 1;
    for (i = 0; i < n && symmetric; i++)
        for (j = i + 1; j < n; j++) if (a[i][j] != a[j][i]) { symmetric = 0; break; }
    printf("The matrix is %ssymmetric.\n", symmetric ? "" : "not ");
    return 0;
}
