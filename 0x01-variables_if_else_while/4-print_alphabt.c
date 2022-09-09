#include <stdio.h>
/**
*main - print lowercase alphabet except q and e
*
*Return: 0 (Success)
*/
int main(void)
{
char lower;
for (lower = 'a'; lower <= 'z'; lower++)
{
if (lower == 'q' || lower == 'e')
{
}
else
{
putchar(lower);
}
}
putchar('\n');
return (0);
}
