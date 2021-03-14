#include <stdio.h>
/* Practice 2-3
 *  
 *   
 */
long htoi(char s[]);
int lower(int c);

main() {
/*
        char s[4];
        s[0]='0';
        s[1]='x';
        s[2]='1';
        s[3]='B';
*/
	char s[2];
	s[0]='1';
	s[1]='B';
        int k;
        for(k=0;k<2;k++)
                printf("%c",s[k]);
        printf("\n%d\n",htoi(s));
	printf("%d  %d\n",lower('B'),lower('b'));
}

long htoi(char s[]) {
        int BEGIN=0;
        if(s[0]=='0' && (s[1]=='x'||s[1]=='X'))
                BEGIN=2;
        int i,n;
	n=0;
        for(i=BEGIN;(s[i]>='0'&&s[i]<='9')||(lower(s[i])>='a'&&lower(s[i])<='f');++i) {
                //n = 16*n + (s[i]- ((s[i]>='0'&&s[i]<='9')?'0':'W'));
                if(s[i]>='0'&&s[i]<='9')
			n=16*n+(s[i]-'0');
		else
			n=16*n+(lower(s[i])-'W');
		
	}
        return n;
}

int lower(int c) {
        if (c>='A'&&c<='Z')
                return c+'a'-'A';
        else
                return c;
}

