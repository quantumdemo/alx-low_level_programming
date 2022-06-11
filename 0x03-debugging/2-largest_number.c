#include "main.h"

/**
 * largest_number - returns the largest of 3 numberslllllllll
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	a = 972;
	b = -98;
	c = 0;

	if (a > b && a > c)
	{
		putchar(a +'0');
	}
	if (b > a && b > c)
	{
		putchar(b +'0');
	}
	if (c > b && c > a)
	{
		putchar(c + '0');
	}
	return (0);
}
