#include <stdio.h>

#define OUTSIDE_WORD    0
#define INSIDE_WORD     1
#define BLANK           ' '

main()
{
    int c, state;

    state = OUTSIDE_WORD;
    while ((c = getchar()) != EOF) {
        if (c == BLANK) {
            if (state == INSIDE_WORD) {
                putchar(c);
            }
            state = OUTSIDE_WORD;
        }

        if (c != BLANK) {
            putchar(c);
            state = INSIDE_WORD;
        }
    }
}
