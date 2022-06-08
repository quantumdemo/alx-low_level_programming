#include "main.h"
/**
 * _isalpha - lowercase or uppercase
 *
 * Description: function returns 1 if the character
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char n1;
	char n2;

	for (n1 = 'a'; n1 <= 'z'; n1++)
	{
		for (n2 = 'A'; n2 <= 'Z'; n2++)
		{
			if (n1 == c || n2 == c)
				return (1);
		}
	}
	return (1);
}
