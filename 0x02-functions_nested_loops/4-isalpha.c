#include "main.h"

/**
 * _isalpha - check main
 * @c: An input character
 * Description: function returns 1 if the character is a a letter in uppercase
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
	if (c == lower || c == upper)
	isletter = 1;
	}
	}
	return (isletter);
}
