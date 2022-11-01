#include "main.h"

unsigned long int _pow(unsigned long int base, unsigned long int power);
/**
*_pow - raises base to power
*
*@base: integer to raise
*@power: power to raise
*
*Return: Integer raised to a power
*/
unsigned long int _pow(unsigned long int base, unsigned long int power)
{
	unsigned long int output = 1;

	if (power == 0)
		return (1);

	while (power > 0)
	{
		output *= base;
		power--;
	}

	return (output);
}
/**
*print_binary - converts binary to decimal
*
*@n: decimal to convert
*/
void print_binary(unsigned long int n)
{
	unsigned long int power = 0;
	unsigned long int rem;

	if (n == 0)
		_putchar('0');

	while (n >= _pow(2, power))
		power++;

	if (n < _pow(2, power))
		power--;

	rem = n;
	while (power >= 1)
	{
		if (rem >= _pow(2, power))
		{
			_putchar('1');
			rem = rem - _pow(2, power);
			power--;
		}
		else
		{
			_putchar('0');
			power--;
		}
	}
	if (rem >= _pow(2, power))
                {
                        _putchar('1');
                        rem = rem - _pow(2, power);
                        power--;
                }
                else
                {
                        _putchar('0');
                        power--;
                }

}
