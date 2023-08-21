#include "main.h"
/**
 * _puts- Entry point
 * u@str: prints a string, followed by a new line, to stdout
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
