#include "main.h"
/**
 * _strlen - returns the length of a string
 * @*s: string
 */
int _strlen(char *s)
{
	*s = 0;

	while (*s)
		*s++;
	return (*s);
}
