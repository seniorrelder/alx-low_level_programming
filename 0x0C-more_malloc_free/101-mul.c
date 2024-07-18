#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/** Checks if a string consists only of digits.
 * @param str The string to check.
 * @return 1 if the string is all digits, 0 otherwise.
 */
int is_number(char *str) {
    while (*str) {
        if (!isdigit(*str)) return 0;
        str++;
    }
    return 1;
}

/** Main function of the program.
 * @param argc Number of command line arguments.
 * @param argv Array of command line arguments.
 * @return Exit status code.
 */
int main(int argc, char *argv[]) {
    long num1, num2, result;

    /** Check for correct number of arguments */
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    /** Validate that both arguments are numbers */
    if (!is_number(argv[1]) || !is_number(argv[2])) {
        printf("Error\n");
        return 98;
    }

    /** Convert arguments to numbers */
    num1 = atol(argv[1]);
    num2 = atol(argv[2]);

    /** Calculate and print the result */
    result = num1 * num2;
    printf("%ld\n", result);

    return 0;
}
