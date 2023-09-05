#include "main.h"
#include <stdlib.h>
/**
 * _strdup-  function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: input string
 * Return: pointer of memory allocated
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *strcut;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	strcut = malloc(sizeof(char) * (i + 1));

	if (strcut == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		strcut[j] = str[j];
	}
	return (strcut);

}
