#include "main.h"
/**
 * print_alphabet_x10 - alphabet
 */
void print_alphabet_x10(void)
{
	char alpha;
	int n = 10;

	alpha = 'a';
	
	while (n >= 1)
	{
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	n--;
	_putchar(10);
	alpha = 'a';
	}
}
