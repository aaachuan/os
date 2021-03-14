#include <stdio.h>
/* Practice 1-6 
 * verify the value of "getchar()!=EOF" is 0 or 1?
 * */
main() {
	int c;
	while( c = getchar() != EOF)
		printf("%d\n", c);
	printf("%d EOF", c);
}
