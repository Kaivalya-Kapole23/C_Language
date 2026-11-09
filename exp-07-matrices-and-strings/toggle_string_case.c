#include <stdio.h>

#define MAX 200

int main(void) {
    char text[MAX];
    int i;
    printf("Enter text: ");
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') text[i] = (char)(text[i] + ('a' - 'A'));
        else if (text[i] >= 'a' && text[i] <= 'z') text[i] = (char)(text[i] - ('a' - 'A'));
    }
    printf("Toggled text: %s", text);
    return 0;
}
