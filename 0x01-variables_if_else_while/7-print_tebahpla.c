#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha <= 'a'; alpha--)
	{
		putchar(alpha);
		putchar('\n');
	}
	return (0);
}


