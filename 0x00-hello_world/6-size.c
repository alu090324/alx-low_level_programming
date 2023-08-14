#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: always 0 (success)
 */
int main(void)
{
	printf("size of a char: %li byte(s)\n", sizeof(char));
	printf("size of an int: %li byte(s)\n", sizeof(int));
	printf("size of a long int: %li bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %li byte(s)\n", sizeof(long long int));
	printf("size of a float: %li byte(s)", sizeof(float));
	return (0);
}
