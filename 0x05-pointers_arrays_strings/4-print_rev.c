#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to printed in reverse
 */

void print_rev(char *s)
{
	int c = 0;
	int i;

	while (s[c] != ;\0')
	{
		c++;
	}

	for (i = c - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
