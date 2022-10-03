#include "main.h"
#include <stdlib.h>
/**
*argstostr -  concatenates all the arguments of your program.
*
*@ac: number of arguments
*@av: argument vector
*
*Return: concatenated string argument
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, tlen = 0, c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			tlen++;
		}
	}
	str = malloc(sizeof(char) * (tlen + ac - 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[c] = av[i][j];
			c++;
			j++;
		}
	str[c] = '\n';
	c++;
	}
	return (str);
}
