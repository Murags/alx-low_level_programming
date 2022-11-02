#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*main - function that copies file content to another
*
*@ac: argument count
*@argv: argument vector
*
*Return: 1 (success)
*/
int main(int ac, char *argv[])
{
	FILE *fp1 = fopen(argv[1], "r");
	FILE *fp2 = fopen(argv[2], "w");
	char buffer[1024];

	if (ac != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}

	if (fp1 == NULL)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	}
	if (fp2 == NULL)
	{
		fclose(fp1);
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	}

	while	(fgets(buffer, sizeof(buffer), fp1))
		dprintf(fp2, "%s", buffer);

	return (1);
}
