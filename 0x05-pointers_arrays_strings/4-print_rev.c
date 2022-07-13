#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to printed in reverse
 */

void print_rev(char *s)
{
	int c = 0;
	int i;

	/* iterate to find length of string and point to last character */
	while (*s != '\0')
	{
		c++;
		++s;
	}

	/* go back to character before null character */
	s--;

	/* print string reversed */
	for (i = c; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
