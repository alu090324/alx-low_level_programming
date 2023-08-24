#include "main.h"
#include <stdio.h>
/**
 *rot13- function that encodes a string using rot13.
 *@z: pointer to string parameter
 *Return:s
 */
char *rot13(char *z)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; z[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (z[i] == data1[j])
			{
				z[i] = datarot[j];
				break;
			}
		}
	}
	return (z);
}
