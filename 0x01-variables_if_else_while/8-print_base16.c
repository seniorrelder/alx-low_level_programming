#include <stdio.h>

int main(void)
{
    int num;
    for (num = 48; num <= 57; num++) /* Print 0-9 */
        putchar(num);
    for (num = 97; num <= 102; num++) /* Print a-f */
        putchar(num);
    putchar('\n');
    return (0);
}
