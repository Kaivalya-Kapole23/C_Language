#include <stdio.h>

int main(void) {
    int code;
    for (code = 'A'; code <= 'z'; code++) {
        if (code >= '[' && code <= '`') continue;
        printf("%c = %d\n", code, code);
    }
    return 0;
}
