#include "main.h"
#define BUFF 1024
/**
 *
 *
 *
 *
 *
 *
 */

int copy_from_to(const char *file_from, const char *file_to)
{
    int fd_val;
    int fd_value;
    int reading, writing;
    char buffer[BUFF];

    if (file_from == NULL || file_to == NULL)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_val = open(file_from, O_RDONLY | O_CREAT | O_EXCL, 0664);
    if (fd_val == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", "file_from");
        exit(98);
    }

    fd_value = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0664);
    if (fd_value == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", "file_to");
        exit(99);
    }

    while ((reading = read(fd_val, buffer, BUFF)) > 0)
    {
        writing = write(fd_value, buffer, reading);
        if (reading == -1)
        {
            exit(98);
        }
        if (writing == -1)
        {
            exit(99);
        }
        if (close(fd_val == -1))
        {
            dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_val);
            exit(100);
        }
        if(close(fd_value == -1))
        {
            dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_value);
            exit(100);
        }
    }

    close(fd_val);
    close(fd_value);
    return (writing);
}
