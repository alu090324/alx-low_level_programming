#include "main.h"
/**
 * _strcat-  function that concatenates two strings
 * @dest:resulting string
 * @src:appends the string
 * Return: main_dest
 */
char *_strcat(char *dest, char *src)
{
	char *main_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (main_dest);
}
