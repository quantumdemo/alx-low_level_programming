#include "main.h"
/**
 * main - alphabeth
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++);
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
