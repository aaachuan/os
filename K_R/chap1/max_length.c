#include <stdio.h>
/*
 * Practice 1-16
 *
 */
#define MAXLINE 10 /* 允许的输入行的最大长度 */

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max=0;
	while((len=getlines(line,MAXLINE)) > 0)
		if(len > max) {
			max=len;
			copy(longest,line);
		}
	if(max > 0){
		if(max>MAXLINE)
			printf("exceeded by: %d\n",max-MAXLINE);
		printf("%d %s", max,longest);
	}
	return 0;
}

int getlines(char s[],int lim) {
	int c,i;
	
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i]=c;
	if(i==lim-1){
		while((c=getchar())!='\n')
			++i;
	}
	if(c == '\n') {
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}

void copy(char to[],char from[]) {
	int i;
	
	i=0;
	while((to[i]=from[i]) != '\0')
		++i;
}
