#include "main.h"
#include <string.h>

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
	int reading;
	int writing;

	if (filename == NULL)
	{
		return (-1);
	}

	hoo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (hoo == -1)
	{
		close(hoo);
		return (-1);
	}


	if (text_content != NULL)
	{
	hey = malloc(strlen(text_content) * sizeof(char));

	reading = read(hoo, hey, strlen(text_content));
	if (reading == -1)
	{
		return (-1);
		close(hoo);
		free(hey);
	}
	
	writing = write(hoo, hey, reading);
	if (writing == -1 || writing != reading)
	{
		return (-1);
		close(hoo);
		free(hey);
	}
		free(hey);
	}

	close(hoo);
	return (1);
}
