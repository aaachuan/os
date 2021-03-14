#include <stdio.h>
/* atoi函数，将字符串s转换为相应的整型数
 *
 */
int atoi(char s[]);

main() {
	char s[5];
	int i;
	for(i=0;i<5;i++)
		s[i]='0'+i;
	for(i=0;i<5;i++)
		printf("%c",s[i]);
	printf("\n");
	printf("%d", atoi(s));	
}

int atoi(char s[]) {
	int i,n;
	n=0;
	for(i=0;s[i]>='0'&&s[i]<='9';++i)
		n=10*n+(s[i]-'0');
	return n;
}




