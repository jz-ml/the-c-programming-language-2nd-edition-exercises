#include <stdio.h>

#define IN      1
#define OUT     0
#define BLANK   ' '
#define NEWLINE '\n'

main()
{
    int i, c, state;
    int word_length;

    while ((c = getchar()) != EOF) {
        if (c == BLANK || NEWLINE) {
            if (state == IN) {
                for (i = word_length; i > 0; --i) {
                    printf("@");
                }
            }
            state = OUT;
        }
        else if (c != BLANK) {
            
            state = IN;
            ++word_length;
        }
    }
}

