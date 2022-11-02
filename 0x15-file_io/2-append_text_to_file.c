#include "main.h"
/**
*append_text_to_file - appends content to the file
*
*@filename: file to append content
*@text_content: content to append to file
*
*Return: 1 (success) else -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fp = fopen(filename, "a");

	if (fp == NULL)
		return (-1);

	while (text_content[i] != '\0')
	{
		putc(text_content[i], fp);
		i++;
	}

	fclose(fp);
	return (1);
}
