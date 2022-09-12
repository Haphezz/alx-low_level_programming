#include <stdio.h>

/**
 * main - Prints the alphabet at reverse
 *
 * Return: Always (Success)
 */
int main(void)<F11>
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);

}
