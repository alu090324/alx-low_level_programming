#include "main.h"
/**
 * _strcpy- Entry point
 * @dest:copy to
 * @src:copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	*dest_ptr = '\0';

	return (dest);
}
