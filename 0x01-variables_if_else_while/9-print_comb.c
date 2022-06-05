#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible combinations of single
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 9)
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
