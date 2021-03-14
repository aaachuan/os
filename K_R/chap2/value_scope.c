#include <stdio.h>
/* Practice 2-1
 * 确定数值范围，对于signed范围，最大为除符号位均为1，最小为最大值相反数减1
 * 对于unsigned范围，最大值为位均为1
 */
int main()
{
    printf("signed char min = %d\n", -(char)((unsigned char)~0>>1)-1);
    printf("signed char max = %d\n", (char)((unsigned char)~0>>1));
    printf("signed short min = %d\n", -(short)((unsigned short)~0>>1)-1);
    printf("signed short max = %d\n", (short)((unsigned short)~0>>1));
    printf("signed int min = %d\n", -(int)((unsigned int)~0>>1)-1);
    printf("signed int max = %d\n", (int)((unsigned int)~0>>1));
    printf("signed long min = %ld\n", -(long)((unsigned long)~0>>1)-1);
    printf("signed long max = %ld\n", (long)((unsigned long)~0>>1));

    printf("unsigned char max = %u\n", (unsigned char)~0);
    printf("unsigned short max = %u\n", (unsigned short)~0);
    printf("unsigned int max = %u\n", (unsigned int)~0);
    printf("unsigned long max = %lu\n", (unsigned long)~0);

    return 0;
}

