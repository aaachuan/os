#include <stdio.h>
/* Practice 1-14
 * 打印输入中各个字符出现频度的直方图
 */
main() {
	int c;
	int ndigit[127];

	for(int i=0;i<127;i++)
		ndigit[i]=0;

	while((c=getchar())!=EOF)
		++ndigit[c];
	
	for(int j=0;j<127;j++) {
		printf("\"%c\" count: ", j);
		for(int k=0;k<ndigit[j];k++)
			printf("*");
		printf("\n");
	}
}
