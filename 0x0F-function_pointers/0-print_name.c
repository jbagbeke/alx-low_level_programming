#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_like_that - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_like_that(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_upper - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_upper(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            _putchar(name[i] + 'A' - 'a');
        }
        else
        {
            _putchar(name[i]);
        }
        i++;
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Henry", print_name_like_that);
    print_name("Henry Hasford", print_name_upper);
    printf("\n");
    return (0);
}
