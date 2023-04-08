#include "main.h"
#include <string.h>

/**
 *create_file - Function to create file
 *@filename: Name of file  to be created
 *@text_content: Content to be written to
 *Return: 1 (Success), -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int hoo;
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
	reading = strlen(text_content);
	writing = write(hoo, text_content, reading);
	if (writing == -1 || writing != reading)
	{
		return (-1);
		close(hoo);
	}
	}

	close(hoo);
	return (1);
}
