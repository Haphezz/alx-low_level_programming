#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 *
 * Return: Always (success)
 */
void rev_string(char *s)
{
	int i, c, k;
	char *a, isa;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		isa = s[i];
		s[i] = *a;
		*a = isa;
		a--;
	}
}
