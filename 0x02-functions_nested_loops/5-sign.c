#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: an input sign
 * Description: Returns 1 and prints + if n is greater than
 * Return: 1 or 0 in otherwise.
 */
int print_sign(int n)
{
	int value;

	if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
	
