#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, ch;

	for (num = '0'; num <= '9'; num++)
	putchar(num);
	for (ch = 'a'; ch <= 'f'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}