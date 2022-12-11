#include <stdio.h>

/**
 * main - print the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int low, up;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	for (up = 'A'; up <= 'Z'; up++)
	putchar(up);
	putchar('\n');

	return (0);
}
