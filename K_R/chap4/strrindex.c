#include <stdio.h>
#include <string.h>
/*
 * Practice 4-1
 * return the match string appear from first right line 
 */ 
int strrindex(char source[], char searchfor[]);

main() {
    char s[101], p[101];
    scanf("%s %s", s, p);
    printf("%d", strrindex(s, p)); 
}


int strrindex(char s[], char p[]) {
	int len1=strlen(s);
	int len2=strlen(p);
        
	int flag=-1;
	int i,k;
	for(i=len1-len2;i>=0;i--) {
		int temp=i;
		for(k=0;p[k]!='\0';k++)
			if(s[temp++]!=p[k])
				break;
		if(p[k]=='\0') {
			flag=i;
			break;
		}
	}
	return flag;
}
				
