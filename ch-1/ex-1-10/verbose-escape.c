#include <stdio.h>

#define NON_ESCAPE_SEQ  0
#define ESCAPE_SEQ      1

main()
{
    int c, state;

    while ((c = getchar()) != EOF) {

        state = NON_ESCAPE_SEQ;

        if (c == '\t') {
            printf("\\t");
            state = ESCAPE_SEQ;
        }
        if (c == '\b') {
            printf("\\b");
            state = ESCAPE_SEQ;
        }
        if (c == '\\') {
            printf("\\\\");
            state = ESCAPE_SEQ;
        }
        if (state == NON_ESCAPE_SEQ) {
            putchar(c);
        }
    }
}
