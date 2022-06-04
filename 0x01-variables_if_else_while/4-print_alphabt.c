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

	for (lc = 'a'; (lc != 'q' && lc != 'e'); lc <= 'z')
	{
		putchar(lc);
		putchar('\n');
	}
	return (0);
}


