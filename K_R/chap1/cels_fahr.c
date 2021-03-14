#include <stdio.h>
/* Practice 1-3 & 1-4
 * add a title name
 * Celsius-Fahrenheit
 * */
main() {

    printf("------Celsius-Fahrenheit table-----\n");

    float cels,fahr;
    float lower,higher,step;

    lower = 0;
    higher = 200;
    step = 10;


    cels = lower;
    while(cels <= higher) {
	fahr = (9.0/5.0) * cels + 32;
	printf("%9.0f %9.1f\n", cels, fahr);
	cels += step;
    }
}
