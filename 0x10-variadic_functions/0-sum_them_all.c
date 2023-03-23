#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Prototype to sum arguments passed
 * @n: Number of numbers
 * Return: Integer is returned(sum)
 *
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    int sum = 0;
    int x;

    va_start(args, n);

    if (n == 0)
        return (0);

    for (i = 0; i < n; i++)
{
    x = va_arg(args, int);
    sum += x;
}
   va_end(args);
    return sum;
}
