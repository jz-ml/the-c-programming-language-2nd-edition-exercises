#include <stdio.h>

main()
{
    int i, c;
    int alpha_chars[26];

    for (i = 0; i < 26; ++i) {
        alpha_chars[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}
