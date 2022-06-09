#include "main.h"
/**
 * print_line - straight line in the terminal.
 */
void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		n++;
	}
	_putchar('\n');
}
