#include "main.h"
/**
* print_last_digit - Check Holberton
* @a: An integer input
* Description: This function prints the last digit of a num
* Return: last digit of number a
*/
int print_last_digit(int a)
{
	int n;

	if (a < 0)
		n = -1 * (a % 10);
	else
		n = (a % 10);

	_putchar((n % 10) + '0');
	return (n % 10);
}	
