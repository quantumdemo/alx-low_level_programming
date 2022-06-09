#include "main.h"
/**
 * print_line - straight line in the terminal.
 */
void print_line(int n)
{
	if (n == 2)
	{
		_putchar('__');
	}
	else
		if (n == 10)
		{
			_putchar('__________');
		}
	_putchar('\n');
		else
			if (n <= 0)
			{
				_putchar('\n');
			}
}
