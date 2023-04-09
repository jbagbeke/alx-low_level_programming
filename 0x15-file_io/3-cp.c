#include "main.h"
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
	dprintf(STDERR_FILENO, "Error: Can't close fd %d", hoo);
	exit(100);
	}
}

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
    int fd_val;
    int fd_value;
    int reading, writing;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_val = open(argv[1], O_RDONLY);

    fd_value = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0664);

    while ((reading = read(fd_val, buffer, BUFFER_SIZE)) > 0)
    {
        writing = write(fd_value, buffer, reading);
        if (reading == -1 || fd_val == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	    exit(98);
        }
        if (writing == -1 || fd_value == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
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
