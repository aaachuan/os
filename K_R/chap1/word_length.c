#include <stdio.h>
/* Practice 1-13
 * 打印输入中单词长度的直方图
 * */
main() {
	int c;
	int nword[20];

	for(int i=0;i<20;i++)
		nword[i]=0;
	int lword=0;
	while((c=getchar())!=EOF) {
		//int lword=0;
		if(c == ' '||c == '\n'||c == '\t') {
			if(lword>0)
				++nword[lword];
			lword=0;
		} else {lword++;}
	}
	/*
	for(int a=0;a<20;a++)
		printf("%d\n",nword[a]);
	*/
	for(int j=0;j<20;j++) {
		printf("%d length words count: ", j); 
		for(int k=0;k<nword[j];k++) {
			printf("*");
		}
		printf("\n");
	}
}
			
			
