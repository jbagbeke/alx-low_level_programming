#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 *
 *
 *
 *
 */

void closing(int hey)
{
    int hoo;

    hoo = close(hey);
    if (hoo == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", hoo);
        exit(100);
    }
}

int main(int argc, char *argv[])
{
    int writing, reading, file_to, file_from;
    char *buffer;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    file_from = open(argv[1], O_RDONLY);
    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

    buffer = malloc(1024 * sizeof(char));
    if (buffer == NULL)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(99);
    }

    while ((reading = read(file_from, buffer, 1024) > 0))
    {
        writing = write(file_to, buffer, reading);

        if (file_from == -1 || reading == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
            free(buffer);
            exit(98);
        }
        if (file_to == -1 || writing == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            free(buffer);
            exit(99);
        }

        reading = read(file_from, buffer, 1024);
        file_to = open(argv[2], O_WRONLY | O_APPEND);
    }

    free(buffer);
    closing(file_from);
    closing(file_to);
    return (0);
}
