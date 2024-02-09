#include <stdio.h>

#define IN      1
#define OUT     0
#define BLANK   ' '

main()
{
    int c, state;
    int word_length;

    while ((c = getchar()) != EOF) {
        if (c == BLANK) {
            if (state == IN) {
                putchar(c);
            }
            state = OUT;
        }
        else if (c != BLANK) {
            putchar(c);
            state = IN;
            ++word_length;
        }
    }
}

/*  If inside a word
 *      Increment word length count for each letter
 *          Print histogram
 *
 * 
 * 
 * 
 * 
 * 
 * */
