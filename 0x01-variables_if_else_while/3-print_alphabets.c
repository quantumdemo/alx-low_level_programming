#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - lower  and uppercase alpha
 *
 * Return:  always 0
 */
int main(void)
{
	char lc;
	char uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}
	putchar('\n');
	return (0);
}
