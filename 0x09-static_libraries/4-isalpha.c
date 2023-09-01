#include "main.h"
/**
 * _isalpha- Entry point
 * @c: checks alphabetic character
 * Return: 1 if is alphabetic 0 if something else
 */
int _isalpha(int c)
{
	return ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'));
}
