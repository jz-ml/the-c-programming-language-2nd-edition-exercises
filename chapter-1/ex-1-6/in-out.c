#include <stdio.h>

/* printf verifies that the expression(c = getchar()) != EOF is
 * equivalent to 1 within the loop
 */

main()
{
    int c;

    while ((c = getchar()) != EOF) {
        printf("%d", (c = getchar()) != EOF);
        putchar(c);
    }
}
