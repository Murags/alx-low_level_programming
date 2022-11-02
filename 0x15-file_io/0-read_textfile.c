#include "main.h"
/**
*read_textfile - reads a text file and prints it to the POSIX standard output.
*
*@filename: name of the file to read
*@letters: number of characters to be printed
*
*Return: Number of characters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t i = 0;
	int c;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	c = fgetc(fp);

	while (i < letters && c != EOF)
	{
		write(STDOUT_FILENO, &c, 1);
		c = fgetc(fp);
		i++;
	}
	fclose(fp);

	return (i);
}
