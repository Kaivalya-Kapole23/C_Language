#include <stdio.h>

#define MAX 200

int main(void) {
    char source[MAX], destination[MAX];
    int i = 0;
    printf("Enter text: ");
    if (!fgets(source, sizeof source, stdin)) return 1;
    while (source[i] != '\0') { destination[i] = source[i]; i++; }
    destination[i] = '\0';
    printf("Copied string: %s", destination);
    return 0;
}
