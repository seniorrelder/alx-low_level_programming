#include <stdio.h>

int _isupper(int c); /* Prototype for the _isupper function */

int main(void) {
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));

    return (0);
}
