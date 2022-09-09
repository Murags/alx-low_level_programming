#include <stdio.h>
/**
*main - Outputs both upperase and lowercase letters
*
*Return: 0 (Success)
*/
int main(void)
{
char lower;
for (lower = 'a';lower <= 'z';lower++)
{
putchar(lower);
}
char Upper;
for (Upper = 'A';Upper <= 'Z';Upper++)
{
putchar(Upper);
}
putchar('\n');
return (0);
}
