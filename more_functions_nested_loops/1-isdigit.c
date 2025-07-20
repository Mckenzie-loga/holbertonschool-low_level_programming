#include "main.h"
#include <stdio.h>

/**
 * _isdigit - this checks if a charachter is a didgit or not.
 * @c: is the value being checked.
 * Return: will either return 1 or 0 zero depending on the condition
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
