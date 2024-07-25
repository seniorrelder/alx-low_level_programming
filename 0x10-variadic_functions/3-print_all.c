#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...) {
    va_list args;
    unsigned int i = 0, j = 0;
    char *str;
    const char t_arg[] = "cifs";
    char *separator = "";

    va_start(args, format);

    while (format && format[i]) {
        j = 0;
        while (t_arg[j]) {
            if (format[i] == t_arg[j] && separator) {
                printf("%s", separator);
                break;
            }
            j++;
        }
        switch (format[i]) {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL) {
                    str = "(nil)";
                }
                printf("%s", str);
                break;
        }
        separator = ", ";
        i++;
    }

    va_end(args);
    printf("\n");
}
