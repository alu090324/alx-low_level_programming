#include "main.h"
/**
 * print_sign- Entry point
 * @n: print sign of a number
 * Return: 1 if n is greater than zero
 * o if n is zero, -1 if n is less that zero
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
