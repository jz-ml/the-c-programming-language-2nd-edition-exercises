#include <stdio.h>

#define IN      1
#define OUT     0
#define BLANK   ' '
#define NEWLINE '\n'

main()
{
    int i, c, state;
    int word_length;

    word_length = OUT;

    while ((c = getchar()) != EOF) {
        if (c == BLANK || c == NEWLINE) {
            if (state == IN) {
                printf("\n");
                for (i = word_length; i > 0; --i) {
                    printf("@");
                }
                printf("\n");
                word_length = OUT;
            }
            state = OUT;
        }
        else if (c != BLANK) {
            state = IN;
            ++word_length;
        }
    }
}

