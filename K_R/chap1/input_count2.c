#include <stdio.h>
/*
 * calculate the num of input char
 */
main() {
	double bc;
	for (bc =0; getchar() !=EOF; ++bc)
		;
	printf("%.0f\n", bc);
}
