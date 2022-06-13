#include "main.h"
/**
 * swap_int - swaps the values
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
