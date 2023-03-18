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
	char *pt2;

        if (new_size == old_size)
        {
                return (ptr);
        }

        if (!ptr)
        {
                return (malloc(new_size));
                point = malloc(new_size);
        }
        if (!point)
        {
                return (NULL);
                pt2 = ptr;
        }
	if (new_size > old_size)
        {
                for (unsigned int i = 0; i < old_size; i++)
                {
                        point[i] = pt2[i];
                }
        }
        if (new_size < old_size)
        {
                for (unsigned int i = 0; i < new_size; i++)
                {
                        point[i] = pt2[i];
                }
        }
        if (new_size == old_size)
        {
                return (ptr);
        }

        /**if (!ptr)                                                                                                         
        {
                return (malloc(new_size));
		point = malloc(new_size);
        }
	if (!point)
	{
		return (NULL);
		pt2 = ptr;
	}*/
        if (new_size == 0 && ptr)
        {
                free(ptr);
		return (NULL);
        }

        return (point);
        free(ptr);
}

