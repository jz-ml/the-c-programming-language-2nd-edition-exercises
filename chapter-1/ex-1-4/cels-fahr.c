#include <stdio.h>

main()
{
    float cels, fahr;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature scale*/
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    cels = lower;
    while (cels <= upper) {
        fahr = ((9.0 * cels) / 5) + 32;
        printf("%3.0f %6.1f\n", cels, fahr);
        cels = cels + step;
    }
}
