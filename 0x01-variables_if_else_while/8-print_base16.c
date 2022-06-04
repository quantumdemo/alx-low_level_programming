#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all the numbers of base 16 in lowercase, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int num;
	char lsd;
		
	for (num = 0; num <= 9; num++)
	{
		putchar((num % 16) + '0');
	}
	for (lsd = 'a'; lsd >= 'f'; lsd++)
	{
		putchar(lsd);
	}
	putchar('\n');
	return (0);
}
