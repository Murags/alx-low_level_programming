#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*main - determines if greater than 5,less than 6 or is 0
*
*Return: 0 (success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
	/* your code goes there */
if (lastDigit > 5)
	{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
else if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
else if (lastDigit < 6 && lastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
	return (0);
}
