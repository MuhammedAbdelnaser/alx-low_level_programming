#include "main.h"

/**
 * Prototype: char *string_toupper(char *);
 * Return: the pointer to the changed string
 */
char *string_toupper(char *s)
{
int i = 0;

while (*(s + i))
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
{
*(s + i) -= 32;
}
i++;
}
return (s);
}
