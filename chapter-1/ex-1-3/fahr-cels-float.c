#include <stdio.h>

main()
{
    float fahr, cels;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature scale*/
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("Fahrenheit - Celsius\n");

    fahr = lower;
    while (fahr <= upper) {
        cels = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, cels);
        fahr = fahr + step;
    }
}
