
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

	printf("size of a char: %lu bytes\n", sizeof(charType));
	printf("size of a int: %lu bytes\n", sizeof(intType));
	printf("size of a long int: %lu bytes\n", sizeof(longintType));
	printf("size of a long long: %lu bytes\n", sizeof(longType));
	printf("size of a float: %lu bytes\n", sizeof(floatType));
	return (0);
}
