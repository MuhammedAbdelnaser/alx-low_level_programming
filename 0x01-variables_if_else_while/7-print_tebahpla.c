#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for(c = 'z';c >= 'a';c--)
	{
		printf("%c", c);
	}

	return (0);
}
