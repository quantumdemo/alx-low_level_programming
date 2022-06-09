#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for a digit
 *
 * @c: the character to evaluate
 * 
 * Return: get 1 if c is digit 
 * get 0 otherwise
 */
int _isdigit(int c)
{
	for (c = 0; c <= 9; c++)
	{
		if (c == 9)
		return (1);
	}
	return (0);
}
