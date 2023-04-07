#include "main.h"

/**
 *
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int hoo;

    if (filename == NULL)
    {
        return (0);
    }

    hoo = open(filename, O_RDONLY);
    if (hoo == -1)
    {
        //close(hoo);
        return (0);
    }

    char hey[letters];

    ssize_t reading = read(hoo, hey, letters);
    if (reading == -1)
    {
        close(hoo);
        return (0);
    }

    ssize_t writing = write(STDOUT_FILENO, hey, reading);
    if (writing == -1 || writing != reading)
    {
        close(hoo);
        return (0);
    }

    close(hoo);
    return (writing);
}
