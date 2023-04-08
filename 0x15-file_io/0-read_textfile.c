#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int hoo;
	char *h;
	ssize_t reading;
	ssize_t writing;

	if (filename == NULL)
	{
	    return (0);
	}

	hoo = open(filename, O_RDONLY);
	if (hoo == -1)
	{
	return (0);
	}

	h = malloc(letters * sizeof(char));
	reading = read(hoo, h, letters);
	if (reading == -1)
	{
		close(hoo);
		free(h);
		return (0);
	}
	
	writing = write(STDOUT_FILENO, h, reading);
	if (writing == -1 || writing != reading)
	{
	close(hoo);
	free(h);
	return (0);
	}

	close(hoo);
	free(h);
	return (writing);
}
