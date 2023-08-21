#include "main.h"
#include <string.h>
/**
 * print_rev- Entry point
 * @s: prints a string, in reverse, followed by a new line
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	for (i = length; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
