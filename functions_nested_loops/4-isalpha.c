#include <stdio.h>
#include "main.h"

/**
 * _isalpha-check if character is lowercase or uppercase
 * Return: 1-if lowercase/uppercase,0 otherwise
 * @letter: is the variable to be checked for lowercase or uppercase
 */


int _isalpha(int letter)
{
	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
