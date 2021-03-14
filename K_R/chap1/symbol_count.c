#include <stdio.h>
/* Practice 1-8
 * count the ' ','\t' and '\n'
 * */
main() {
    int c,ns,nt,nn;
	
    ns=0;
    nt=0;
    nn=0;

    while ((c=getchar()) != EOF) {
	if (c == ' ')
		++ns;
	if (c == '\t')
		++nt;
	if (c == '\n')
		++nn;
    }
    printf("space count: %d\n", ns);
    printf("\\t count: %d\n", nt);
    printf("\\n count: %d\n", nn);
}
