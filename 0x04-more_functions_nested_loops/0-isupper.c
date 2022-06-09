#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: the character
 * Return: 1 0r 0
 */
int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
