#include "main.h"

/**
 * swap_int - function that swaps the value of 2 integers
 * @a: First integer to swap
 * @b: Second integer to swap
 *
 * Return: Always (success)
 */
void swap_int(int *a, int *b)
{
	int hap;

	hap = *a;
	*a = *b;
	*b = hap;
}
