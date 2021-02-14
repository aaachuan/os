#include <stdio.h>
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
