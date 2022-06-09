#include "main.h"
/**
 * more_numbers - prints  times the numbers
 */
void more_numbers(void)
{
	int c, n;
	n = 9;

	for (c = 0; c < 14; c++)
	{
		_putchar(c + '0');
		if (c == 14)
			continue;
	}
	n--;
	_putchar(9 + '0');
	c++;
	_putchar('\n');
}
