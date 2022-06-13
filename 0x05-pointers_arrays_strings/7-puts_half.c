#include "main.h"
/**
 * puts_half - that prints every other character of a string, starti
 * @str: the used string reference
 * Return: 0
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
