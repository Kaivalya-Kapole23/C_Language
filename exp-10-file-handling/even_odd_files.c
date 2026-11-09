#include <stdio.h>

#define MAX 100

int main(void) {
    int a[MAX], n, i;
    FILE *even_file = fopen("even.txt", "w");
    FILE *odd_file = fopen("odd.txt", "w");
    if (!even_file || !odd_file) { perror("Cannot create output files"); if (even_file) fclose(even_file); if (odd_file) fclose(odd_file); return 1; }
    printf("Enter number of values (1-%d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { fclose(even_file); fclose(odd_file); return 1; }
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) { fclose(even_file); fclose(odd_file); return 1; }
        fprintf(a[i] % 2 == 0 ? even_file : odd_file, "%d\n", a[i]);
    }
    fclose(even_file);
    fclose(odd_file);
    printf("Created even.txt and odd.txt.\n");
    return 0;
}
