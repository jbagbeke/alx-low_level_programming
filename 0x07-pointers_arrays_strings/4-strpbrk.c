#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Entry point of this task :)
 * @s: string to be searched
 * @accept: what contains the string
 * Return: Null
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        if (strchr(accept, *s))
            return s;
        s++;
    }
    return NULL;
}
