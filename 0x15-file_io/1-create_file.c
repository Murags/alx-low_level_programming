#include "main.h"
/**
*create_file - Function that creates a file
*
*@filename: Filename of file to create
*@text_content: content to write in file
*
*Return: 1 (Success) else -1
*/
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fp = fopen(filename, "w");

	if (fp == NULL)
		return (-1);

	chmod(filename, 0600);

	while (text_content[i] != '\0')
	{
		putc(text_content[i], fp);
		i++;
	}

	fclose(fp);
	return (1);
}
