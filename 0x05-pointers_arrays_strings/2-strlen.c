#include <stdio.h>

/**
 *  _strlen 
 *  @str; The string to get the length of 
 *  Return: The length of @str
 */
size_t_strlen(const char *str)

{
	size_t length = 0

		while (*str++)
		length++
			return (length);
}






#include <stddef.h>

size_t size_t_strlen(const char *str) {
    size_t length = 0; // Corrected the missing semicolon
    while (*str++) { // This should be correctly recognized now
        length++;
    }
    return length; // Ensure the function returns a value
}
