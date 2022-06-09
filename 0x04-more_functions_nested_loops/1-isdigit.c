#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: the character to evaluate 
 * Return: 1 if true, 0 if false
 */
int _isdigit(int c)
{
	for (c = 0; c <  9; c++)
	{
		if (c == 9)
		_putchar(c);
		return (1);
	}
	return (0);
}
