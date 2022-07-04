
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	char charType;
	long long longType;

	printf("size of an int: %lu bytes\n", sizeof(intType));
	printf("size of a float: %lu bytes\n", sizeof(floatType));
	printf("size of a long int: %lu bytes\n", sizeof(longintType));
	printf("size of a char: %lu bytes\n", sizeof(charType));
	printf("size of a long long: %lu bytes\n", sizeof(longType));
	return (0);
}
