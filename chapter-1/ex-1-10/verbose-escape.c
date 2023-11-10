#include <stdio.h>

#define NON_ESCAPE_SEQ  0
#define ESCAPE_SEQ      1

main()
{
    int c, state;

    state = NON_ESCAPE_SEQ;

    while ((c = getchar()) != EOF) {
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
    }
}
