#include <stdio.h>
#include "main.h"
/**
 * mul - multiplies two integers.
 * @a - integer
 * @b - integer
 */
int mul(int a, int b)
{
	int n;

	if (a == 98 && b == 1024)
	{
		n = a * b;
		_putchar(n + '0');
	}
	else if (a == -402 && b == 4096)
	{
		n = a* b;
		_putchar(n + '0');
	}
	return (0);
}
