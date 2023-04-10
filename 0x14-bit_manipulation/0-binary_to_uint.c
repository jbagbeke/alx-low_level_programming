#include "main.h"
/**
 *
 *
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;
    int i;
    int d = 0;
    int hoo;

    for (i = strlen(b) - 1; i >= 0; i--)
    {
        if (b[i] != '0' & b[i] != '1')
        {
            return (0);
        }

        hoo = b[i] - '0';
        num += hoo * pow(2, d);

        d++;
    }

    printf("%u\n", num);

    return (num);

}
