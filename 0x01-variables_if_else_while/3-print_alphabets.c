#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * lower anduppercase alpha
 *
 * Return always 0
 */
int main(void)
{
	char lc;
	char uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar('\n', lc);
	}
	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar('\n', uc);
	}
	return (0);
}
