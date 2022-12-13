#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, y;

	for (n = '0'; n < '8'; n++)
	{
	for (y = '1'; y < '9'; y++)
	{
	if (n < y)
	{
	putchar(n);
	putchar(y);
	{
	if (n != '8' || y != '9')
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
