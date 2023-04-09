#include "main.h"
/**
 *closing - Function to close file
 *@hey: File handle to be closed
 *Return - Void
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
/**
 *buffering - Function to allocate memory for file
 *@file: File to allocate memory for
 *Return: buffer
 *
 */
char *buffering(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(99);
	}
	return (buffer);
}
/**
 * main - Function to copy file from a file to another
 * @argc: Argument counter for number of arguments entered
 * @argv: Number of arguments
 * Return: 0 (success), else for error
 */
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
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	buffer = buffering(argv[2]);

	do
	{

	if (file_from == -1 || reading == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	free(buffer);
	exit(98);
	}
	
	writing = write(file_to, buffer, reading);
	if (file_to == -1 || writing == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	free(buffer);
	exit(99);
	}

	reading = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while ((reading = read(file_from, buffer, 1024)) > 0);

	free(buffer);
	closing(file_from);
	closing(file_to);
	return (0);
}
