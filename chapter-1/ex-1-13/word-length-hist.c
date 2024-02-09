#include <stdio.h>

#define IN      1
#define OUT     0
#define BLANK   ' '
#define NEWLINE '\n'

main()
{
    int c, state;
    int word_length;

    while ((c = getchar()) != EOF) {
        if (c == BLANK || NEWLINE) {
            if (state == IN) {
                
            }
            state = OUT;
        }
        else if (c != BLANK) {
            
            state = IN;
            ++word_length;
        }
    }
}

