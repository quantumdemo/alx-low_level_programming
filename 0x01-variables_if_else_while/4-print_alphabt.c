#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - lc letter print except q and e
 *
 * Return: 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'q' && lc != 'e')
		putchar(lc);
		putchar('\n');
	}
	return (0);
}


