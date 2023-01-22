#include <stdio.h>

/**
 * Print_name - Function that prints a name.
 *
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL  || f == NULL)
		return;
	f(name);
}
