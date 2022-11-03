#include "main.h"
#include <stdlib.h>
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
	FILE *fp1 = fopen(argv[1], "r"), *fp2 = fopen(argv[2], "a");
	char buffer[1024];
	int n;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (fp1 == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		n = fclose(fp2);
		exit(98);
	}
	if (fp2 == NULL)
	{
		fclose(fp1);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (fgets(buffer, sizeof(buffer), fp1))
	{
		dprintf(fileno(fp2), "%s", buffer);
	}
	n = fclose(fp1);
	if (n == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(fp1));
		exit(100);
	}
	n = fclose(fp2);
	if (n == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(fp2));
		exit(100);
	}
	return (0);
}
