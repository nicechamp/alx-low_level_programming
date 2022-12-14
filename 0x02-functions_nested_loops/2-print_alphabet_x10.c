#include "main.h"

/**
 * print_alphabet_x10 - check main
 * Description: 'uses _putchar to print alphabet in lowercase 10 times.'
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char e;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (e = 'a'; e <= 'z'; e++)
		_putchar(e);
		_putchar('\n');
	}
}
