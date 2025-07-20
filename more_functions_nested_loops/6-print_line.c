#include "main.h"
#include <unistd.h>
/**
 * print_line - prints a line.
 * @n: is the number of times the line should be printed.
 * Return: returns the line.
 */
void print_line(int n)
{

	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
