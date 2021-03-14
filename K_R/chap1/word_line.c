#include <stdio.h>
/*Practice 1-12
 *每行一个单词打印
 */
#define IN 1
#define OUT 2

main() {
	int c,s,state;
	state = OUT;
	s = 0;
	while ((c=getchar()) != EOF) {
		if(c == ' '||c == '\n'||c == '\t') {
			state = OUT;
			++s;
		} else if (state == OUT) {
			state = IN;
			putchar(c);
			s = 0;
		} else if (state == IN) {
			putchar(c);
		}
		if(s == 1)
			printf("\n");
        }
}
