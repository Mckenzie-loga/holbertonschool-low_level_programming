#include "main.h"
#include <stdio.h>

/**
 * _isupper - this function checks if the charachter is upercase
 * @c: this is the variable being checked.
 * Return: Well, this depends on the charachter if the return is 0 or 1.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
