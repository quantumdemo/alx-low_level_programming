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
	int n

	for (n = 0; n <= 9; n++)
	{
		if (n == c)
		return (1);
	}
	return (0);
}
