#include "main.h"
/**
 * print_alphabet_x10- Entry point
 * Description: prints alphabets 10 times in lowercase
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char letter = 'a';

		while  (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
