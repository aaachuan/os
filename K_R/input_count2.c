#include <stdio.h>
main() {
	double bc;
	for (bc =0; getchar() !=EOF; ++bc)
		;
	printf("%.0f\n", bc);
}
