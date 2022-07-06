#include "main.h"
/**
 * _islower - print lower case character
 * @c: the character to be printed
 * Return: 1 if c is lowercase otherwize 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
