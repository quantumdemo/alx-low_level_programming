#include <stdlib.h>
#include "main.h"
/**
 * int _islower - alphabeth
 *
 *  @c: The character to evaluate
 *
 *  Return: Get 1 if c is uppercase,
 *  get 0 otherwise
 */
int _islower(int c)
{
	int c;

	if (c >= 38 && c <= 108)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
