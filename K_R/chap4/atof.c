#include <ctype.h>
#include <stdio.h>
/*
 * Practice 4-2
 * 
 *
 */ 
#define MAXLINE 100

double atof(char []);
int getlines(char line[], int max);

main() {
	//double sum, atof(char []);
	double sum;
	char line[MAXLINE];
	//int getlines(char line[], int max);

	sum=0;
	while(getlines(line,MAXLINE)>0) 
		printf("\t%g\n", sum += atof(line));
	return 0;
	
}

double atof(char s[]) {
	double val,power;	
	int i,sign;
	
	for(i=0;isspace(s[i]);i++)
		;
	sign=(s[i]=='-')?-1:1;
	if(s[i]=='-'||s[i]=='+')
		i++;
	for(val=0.0;isdigit(s[i]);i++)
		val=10.0*val+(s[i]-'0');
	if(s[i]=='.')
		i++;
	for(power=1.0;isdigit(s[i]);i++) {
		val=10.0*val+(s[i]-'0');
		power *= 10.0;
	}
	//扩充处理123.45e-6
	if(s[i]=='e'||s[i]=='E')
		i++;
	int esign;
	esign=(s[i]=='-')?-1:1;
	if(s[i]=='-'||s[i]=='+')
		i++;

	int ecount;
	for(ecount=0;isdigit(s[i]);i++) 
		ecount=10*ecount+(s[i]-'0');
	int k;
	double epower=1.0;
	if(esign==-1) {
		for(k=0;k<ecount;k++)
			epower /= 10.0;
	} else {
		for(k=0;k<ecount;k++)
			epower *= 10.0;
	}

	return (sign*val/power)*epower;
}

int getlines(char s[], int lim) {
	int c,i;
	i=0;
	while(--lim >0 && (c=getchar())!=EOF && c!='\n')
		s[i++]=c;
	if(c=='\n')
		s[i++]=c;
	s[i]='\0';
	return i;
}
