#include "main.h"
/**
 * print_numbers - prints the numbers
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putxhar(c + '0');
	}
	_putchar('\n');
	return (0);
}
