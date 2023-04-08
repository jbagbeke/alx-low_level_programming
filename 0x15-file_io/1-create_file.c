#include "main.h"

/**
 *
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int hoo;
	char *hey;

	hoo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (hoo == -1)
	{
		close(hoo);
		return (-1);
	}

	hey = malloc(strlen(text_content) * sizeof(char));

	int reading = read(hoo, hey, strlen(text_content));
	if (reading == -1)
	{
		return (-1);
		close(hoo);
		free(hey);
	}

	int writing = write(STDOUT_FILENO, hey, reading);
	if (writing == -1)
	{
		return (-1);
		close(hoo);
		free(hey);
	}

	return (1);
	close(hoo);
	free(hey);
}
