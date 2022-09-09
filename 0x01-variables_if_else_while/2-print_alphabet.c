#include <stdio.h>
/**
*main - prints lowercase alphabets
*
*Return: 0 (success)
*/
int main(void)
{
char l;
for (l = 'a'; l <= 'z'; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
