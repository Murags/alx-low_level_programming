#include <stdio.h>
/**
*main - print number of arguments
*
*@argc: number of arguments
*@argv: string argumnets
*
*Return: 0
*/
int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	(void) argv;
	return (0);
}
