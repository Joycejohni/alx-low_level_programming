#include "main.h"

/**
 * check if c is lowercase or uppercase
 * @c : character to be checked
 * Return 1 if c is lover case or uppercase otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
