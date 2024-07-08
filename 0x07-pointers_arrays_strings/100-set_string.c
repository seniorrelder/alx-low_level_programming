#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char
 * @s: The pointer to a pointer to a char to be set
 * @to: The char to set the pointer to
 *
 * Description: This function sets the value of a pointer to a char to the
 * value of another char.
 */
void set_string(char **s, char *to) {
    *s = to;
}
