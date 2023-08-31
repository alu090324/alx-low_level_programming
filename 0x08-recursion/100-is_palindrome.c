#include "main.h"
/**
 * _strlen_recursion- length of string
 * @s:input string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparing_str- comparing chars of the str
 * @s: string
 * @left:smallest iterator
 * @right:largest iterator
 * Return: int
 */
int comparing_str(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + comparing_str(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome- function that returns 1 if a
 * string is a palindrome and 0 if not.
 * @s:string
 * Return:1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparing_str(s, 0, _strlen_recursion(s) - 1));
}
