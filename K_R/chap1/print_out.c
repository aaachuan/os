#include <stdio.h>
/* Practice 1-9
 * 连续的多个空格用一个空格代替
 * */
main() {
    int c,s;

    while ((c=getchar()) != EOF) {
	if (c == ' ') 
		++s;
	else 
		s=0;
	if (s <= 1)
    		putchar(c);
     }
}
