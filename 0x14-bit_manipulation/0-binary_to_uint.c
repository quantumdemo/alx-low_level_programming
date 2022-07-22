#inxlude "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 * Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	uint a = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		a = a * 2 + (*b++ - 48);
	}
	return (a);
}
