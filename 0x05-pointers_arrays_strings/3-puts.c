#include "main.h"
/**
 * _puts- Entry point
 * @str: prints a string, followed by a new line, to stdout
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
		_putchar('\n');
}
