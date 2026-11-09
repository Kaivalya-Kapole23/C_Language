#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *source = fopen("product.txt", "r");
    FILE *destination;
    int ch, characters = 0, words = 0, lines = 0, in_word = 0;
    if (!source) { printf("Create product.txt first by running the product manager.\n"); return 1; }
    destination = fopen("copy.txt", "w");
    if (!destination) { perror("Cannot create copy"); fclose(source); return 1; }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
        characters++;
        if (ch == '\n') lines++;
        if (isspace((unsigned char)ch)) in_word = 0;
        else if (!in_word) { words++; in_word = 1; }
    }
    fclose(source);
    fclose(destination);
    printf("Copied to copy.txt\nCharacters: %d\nWords: %d\nLines: %d\n", characters, words, lines);
    return 0;
}
