#include "main.h"
/**
 * print_alphabet- Entry point
 * Description: prints alphabets in lowercase
 * Return: always (0)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
