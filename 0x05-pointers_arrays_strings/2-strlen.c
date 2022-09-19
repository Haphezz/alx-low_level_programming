#include "main.h"

/**
 * _strlen - function returns length of string
 * @s: string to count
 *
 * Return: String Length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
        return (c);
}
