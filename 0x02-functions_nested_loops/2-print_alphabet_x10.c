 #include "main.h"
/**
 * main- print alphabetes
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int n;
	char ch;

	n = 0;
	ch = 'a';

	while (n < 10)
	{
		while (ch <= 'z')
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	n++;
}
