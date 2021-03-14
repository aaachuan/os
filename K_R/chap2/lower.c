#include <stdio.h>
/* Practice 2-10
 * exp1?exp2:exp3
 *
 */
int lower(int c);

main() {
	printf("%c\n",lower('B'));	
}

int lower(int c) {
	return (c>='A'&&c<='Z')?(c+'a'-'A'):c;
}
