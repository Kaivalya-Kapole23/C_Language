#include <stdio.h>

int main(void) {
    int n, d, prime;
    for (n = 2; n <= 100; n++) {
        prime = 1;
        for (d = 2; d <= n / d; d++) {
            if (n % d == 0) { prime = 0; break; }
        }
        if (prime) printf("%d ", n);
    }
    printf("\n");
    return 0;
}
