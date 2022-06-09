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

	if (a >= -402 && a <= 98)
	{
		if (b >= 1024 && <= 4096)
		{
			n = a * b;
			_putchar(n);
		}
	}
}
