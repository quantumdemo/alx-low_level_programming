#include <stdio.h>
/**
 * main - alphabeth
 *
 * Return: 0
 */
int main(void)
{
	void print_alphabet(char alpha)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++);
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
