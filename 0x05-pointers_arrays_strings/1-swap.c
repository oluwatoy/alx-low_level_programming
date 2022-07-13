#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap with b
 *
 * @b: integer to swap with a
 *
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int temp_a, temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_b;
	*b = temp_a;
}
