#include <stdio.h>
/* Practice 1-10
 * 替换输入字符显式输出
 * how to input the '\b'--Backspace
 * */
main() {
	int c;
	while((c=getchar())!=EOF) {
		if(c == '\t')
			printf("\\t");
		else if(c == '\b')
			printf("\\b");
		else if(c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}
}

