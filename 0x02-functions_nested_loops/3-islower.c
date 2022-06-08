#include <stdlib.h>
#include "main.h"
/**
 * _islower - alphabeth
 *
 *  @c: The character to evaluate
 *
 *  Return: Get 1 if c is uppercase,
 *  get 0 otherwise
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i  <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
