#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;
int j = 0;
char try;

while (s[i] != '\0')
{
i++;
}
i--;
while (j < i)
{
try = s[j];
s[j] = s[i];
s[i] = try;
j++;
i--;
}
}
