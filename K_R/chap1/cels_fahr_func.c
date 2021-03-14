#include <stdio.h>
/* Pactice 1-15
 *   add a title name
 *   Celsius-Fahrenheit
 * */
float cel_func(float cels);
main() {

    printf("------Celsius-Fahrenheit table-----\n");

    float cels;

    for(cels=0.0;cels<=200.0;cels += 10.0) {
	printf("%9.0f %9.1f\n", cels, cel_func(cels));
    }

    
}
    float cel_func(float cels) {
        float fahr;
        fahr = (9.0/5.0) * cels + 32;
        return fahr;
    }

