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

void closing(int fd)
{
	int hoo;

	hoo = close(fd);
	if (hoo == -1)
	{
	dprintf(2, "Error: Can't close fd %d", hoo);
	exit(100);
	}
}

int main(int argc, char *argv[])
{
    int fd_val;
    int fd_value;
    int reading, writing;
    char buffer[BUFF];

    if (argc != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_val = open(argv[1], O_RDONLY);
    if (fd_val == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    fd_value = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0664);
    if (fd_value == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", argv[2]);
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
        closing(fd_val);
	closing(fd_value);
	fd_value = open(argv[2], O_WRONLY | O_APPEND);
}

    closing(fd_val);
    closing(fd_value);
    return (0);
}
