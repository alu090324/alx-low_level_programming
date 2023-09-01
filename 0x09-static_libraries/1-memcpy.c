#include "main.h"
/**
 * _memcpy- function that copies memory area.
 * @dest:memory of where is stored
 * @src:memory of where is copied
 * @n:number of bytes
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
