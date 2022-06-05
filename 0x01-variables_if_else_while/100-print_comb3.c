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
	int num;

	for (num = 01; num <= 99; num++)
	{
		if (num != (10, 11, 20, 21, 22, 30, 31, 32, 33, 40, 41, 42, 43, 44, 50, 51, 52, 53, 54, 55, 60, 61, 62, 63, 64, 65, 66, 70, 71, 72, 73, 74, 75, 76, 77, 80, 81, 82, 83, 84, 85, 86, 87, 88, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99))
			putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}	
