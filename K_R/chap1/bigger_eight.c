#include <stdio.h>
/* 打印长度大于8的所有输入行 */
#define MAXLINE 20

int lines(char line[], int maxline);
main() {
	int len;
	char line[MAXLINE];


	while((len = lines(line,MAXLINE)) > 0)
		if(len>8)
			printf("%d %s", len,line); 
		

}

int lines(char s[], int lim) {
	int c,i;
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
		s[i]=c;
	if(c=='\n') {
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}


