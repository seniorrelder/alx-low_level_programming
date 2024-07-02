#include <stddef.h>

size_t size_t_strlen(const char *str) {
    size_t length = 0; // Corrected the missing semicolon
    while (*str++) { // This should be correctly recognized now
        length++;
    }
    return length; // Ensure the function returns a value
}

