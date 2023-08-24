#include "main.h"
/**
 * _strncat-write a function that concatenates
 * two strings
 * @dest: resulting pointer
 * @src: null terminated string
 * @n: size in bytes
 * Return: main_dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *main_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		n--;
	}

	*dest = '\0';

	return (main_dest);
}
