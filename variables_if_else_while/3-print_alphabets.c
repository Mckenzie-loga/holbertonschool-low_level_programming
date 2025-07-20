#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase then uppercase
 *              using only putchar (3 times total)
 * Return: Always 0 (Success)
 */
int main(void)
{
        char letter;

        /* Print lowercase alphabet */
        for (letter = 'a'; letter <= 'z'; letter++)
                putchar(letter);

        /* Print uppercase alphabet */
        for (letter = 'A'; letter <= 'Z'; letter++)
                putchar(letter);

        putchar('\n');

        return (0);
}
