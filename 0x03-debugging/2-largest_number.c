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
	int largesr;

	if (a > b && a > c)
	{
		largest = a;
	}
	else
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
