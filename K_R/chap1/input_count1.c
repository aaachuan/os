#include <stdio.h>
/*
 * calculate the num of input char 
 */
main() {
    long nc;
 
    nc = 0;
    while (getchar() != EOF)
	++nc;
    printf("%ld\n", nc);
}
