#include "main.h"

int print_last_digit(int num)
{
	int lastDigit;

	lastDigit = num % 10;
	if(lastDigit >= 0)
	{
		_putchar(lastDigit + 48);
		return (lastDigit);
	}
	else
	{
		_putchar((lastDigit * -1) + 48);
		return ((lastDigit * -1));
	}
}
