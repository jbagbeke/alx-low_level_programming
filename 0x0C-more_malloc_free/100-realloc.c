#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_realloc - Function that reallocates memory
 *@ptr: Points to old_size
 *@old_size: Old memory allocated
 *@new_size: New memory to be allocated
 *Return: Pointer point
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
        char *point;

        point = malloc(new_size);

        if (new_size > old_size)
        {
                for (int i = 0; i < old_size; i++)
                {
                        point[i] = ptr[i];
                }
        }
        if (new_size < old_size)
        {
                for (int i = 0; i < new_size; i++)
                {
                        point[i] = ptr[i];
                }
        }
        if (new_size == old_size)
        {
                return (ptr);
        }

        if (ptr = NULL)                                                                                                         
        {
                return (malloc(new_size));
        }
        if (new_size = NULL || ptr != NULL)
        {
                free(ptr);
        }

        return (point);
        free(point);
}

