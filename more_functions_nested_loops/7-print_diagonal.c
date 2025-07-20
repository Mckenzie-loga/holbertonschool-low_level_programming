#include "main.h"
#include <unistd.h>
/**
 * print_diagonal - prints a diagonal i guess.
 * @n: is the number of times the \ is typed i guess.
 * Return: returns the line.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
