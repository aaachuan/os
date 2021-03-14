#include <stdio.h>

void squeeze(char s[], int c);
void new_squeeze(char s1[], char s2[]);
main() {
	char s1[4]={'a','b','c','d'};
	char s2[2]={'b','f'};
	new_squeeze(s1,s2);
	printf("%s\n",s1);	
}


void new_squeeze(char s1[],char s2[]) {
	int k;
	for(k=0;s2[k]!='\0';k++)
		squeeze(s1, s2[k]);
}

void squeeze(char s[], int c) {
	int i,j;
	for(i=j=0;s[i]!='\0';++i) 
		if(s[i]!=c)
			s[j++]=s[i];
	s[j]='\0';
}
	
