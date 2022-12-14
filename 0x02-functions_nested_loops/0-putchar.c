#include <unistd.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: O
 */
int main(void)
{
	char word[8] = "_putchar";
	int e;

	for (e = 0; e < 9; e++)
	_putchar(word[e]);
	_putchar('\n');

	return (0);
}
