#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: number of bytes to allocate
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int i;
	char *p;

	if (b == 0)
		return (NULL);
	p = malloc(b * size of (char));
	if (p == NULL)
	{
	       return (NULL)
	}
	for (i = 0; i < b; i++)
	{
		p[i] = b;
	}
	return (p);
}	
