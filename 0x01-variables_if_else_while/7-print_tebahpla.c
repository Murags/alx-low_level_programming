#include <stdio.h>
/**
*main - print alphabets in reverse
*
*Return: 0 (Success)
*/
int main(void)
{
	char lowerRev;
	for (lowerRev = 'z'; lowerRev >= 'a'; lowerRev--)
	{
		putchar(lowerRev);
	}
putchar('\n');
return (0);
}
