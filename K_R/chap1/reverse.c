#include <stdio.h>
#define MAXLINE 20

void reverse(char s[]);

main() {
	char line[MAXLINE];
	reverse(line);	

}

void reverse(char s[]) {
	int c,nl,i;
	char temp;
	for(nl=0;(c=getchar())!='\n';nl++)
		s[nl]=c;
	for(i=0;i<nl/2;i++) {
		temp=s[i];
		s[i]=s[nl-1-i];
		s[nl-1-i]=temp;
	}
	printf("%s\n", s);
}

