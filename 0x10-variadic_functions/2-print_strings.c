#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list args;
    char *hey;

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        hey = va_arg(args, char *);

        if (hey == NULL)
            printf("(nil)");
        else
            printf("%s", hey);

        
        if (i != (n - 1) && separator != NULL)
            printf("%s", separator);

        printf("\n");

        /*va_end(args);*/
    }
    va_end(args);
}
