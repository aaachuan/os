#include <stdio.h>
#include <ctype.h>
#include "calc.h"
/*
 * Practice 4-3 consider the number with '-' sign. 
 *
 */ 
int getop(char s[]) {
        int i,c;
        while((s[0]=c=getch())==' '||c=='\t')
                ;
        s[1]='\0';
        if(!isdigit(c) && c!='.' && c!='-')
                return c;
        i=0;
	if(c=='-') 
		s[++i]=c=getch();
        if(isdigit(c))
                while(isdigit(s[++i]=c=getch()))
                        ;
        if(c=='.')
                while(isdigit(s[++i]=c=getch()))
                        ;
        s[i]='\0';
        if(c!=EOF)
                ungetch(c);
        return NUMBER;
}
