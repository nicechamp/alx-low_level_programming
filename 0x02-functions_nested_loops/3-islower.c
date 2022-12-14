#include "main.h"

/**
 * _islower - check main
 * @c: an input character
 * Description: checks for lowercase characters
 * Return: return 1 if it's lowercase or 0 of it's uppercase.
 */
int _islower(int c)
{
	char e;
	int lower = 0;

	for (e = 'a'; e <= 'z'; e++)
	{
	if (e == c)
	lower = 1;
	}

	return (lower);
}
