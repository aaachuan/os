#include <stdio.h>

/*
 * Practice 3-2
 *
 */ 

void escape(char s[],char t[]);


main() {
      char s[10];
      char t[5]={'a','\n','\t','b','g'};
      escape(s,t);
      
      printf("%s\n",s);
	
}

void escape(char s[],char t[]) {
	int i,j;
	i=j=0;
	while(t[j]!='\0') {
		switch(t[j]) {
			case '\n':
				s[i]='\\';
				s[++i]='n';
				break;
			case '\t':
				s[i]='\\';
				s[++i]='t';
				break;
			default:
				s[i]=t[j];
				break;
		}
		++i;
		++j;
	}
}
