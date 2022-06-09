#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
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
	_putchar('\n');
	n--;
	_putchar(9);
	c++;
}
