#include <stdio.h>
#include <ctype.h>

int main() {
    int ch;

    while ((ch = getchar()) != EOF) {
        if (ch == ' ') continue;
        if (!isdigit(ch)) break;
        putchar(ch);
    }

    return 0;
}
