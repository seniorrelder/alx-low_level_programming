#include <stdio.h>

int main(int argc, char *argv[]) {
    /* Reference argv in a benign way to avoid unused parameter warning */
    if (argv[0]) {}

    printf("%d\n", argc - 1);
    return 0;
}
