#include "main.h"

/**
 * print_sign  - function to print sign of number
 * @n: character
 * Return: 1 if n greater than zero otherwise
 * 0 if n equal to zero -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

