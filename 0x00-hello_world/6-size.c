
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long longType;
	float floatType;

	printf("Size of a char: %lu bytes\n", sizeof(charType));
	printf("Size of an int: %lu bytes\n", sizeof(intType));
	printf("Size of a long int: %lu bytes\n", sizeof(longintType));
	printf("Size of a long long: %lu bytes\n", sizeof(longType));
	printf("Size of a float: %lu bytes\n", sizeof(floatType));
	return (0);
}
