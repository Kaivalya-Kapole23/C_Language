#include <stdio.h>

#define MAX 200

size_t custom_strlen(const char *text) {
    const char *p = text;
    while (*p != '\0' && *p != '\n') p++;
    return (size_t)(p - text);
}

int main(void) {
    char text[MAX];
    printf("Enter text: ");
    if (!fgets(text, sizeof text, stdin)) return 1;
    printf("Length = %zu\n", custom_strlen(text));
    return 0;
}
