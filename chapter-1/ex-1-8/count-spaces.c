#include <stdio.h>

main()
{
    int c, nb, nt, nl;

    nb = 0;
    nt = 0;
    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++nb;
        }
        if (c == '\t') {
            ++nt;
        }
        if (c == '\n') {
            ++nl;
        }
    }
    printf("Blanks: %d\n", nb);
    printf("Tabs: %d\n", nt);
    printf("Newlines: %d\n", nl);
}
