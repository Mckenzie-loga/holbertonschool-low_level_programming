#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the value we extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit = -lastDigit;

	if (n < 0)
		n = -n;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
