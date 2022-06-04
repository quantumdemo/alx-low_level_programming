#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lc;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
		putchar("\n");
	}
	return (0);
}


