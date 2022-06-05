#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - printing number of no-like
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8; a++)
	{
		for (b = a + 1; b <=9; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			if (a ==8 && b == 9)
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return(0);
}
