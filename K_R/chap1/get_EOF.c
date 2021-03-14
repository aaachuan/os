#include <stdio.h>
/* the mystery of EOF is Ctrl+D
 * */
main() {
    printf("%d\n", (getchar() != EOF));
}
