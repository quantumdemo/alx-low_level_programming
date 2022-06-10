#include "main.h"
/**
 * print_diagonal - diagonal print
 * @n: integer
 */
void print_diagonal(int n)
{
	for (n = 1; n <= 10; n++)
	{
		_putchar(2);
		_putchar(4);
		_putchar(5);
		_putchar(10);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
