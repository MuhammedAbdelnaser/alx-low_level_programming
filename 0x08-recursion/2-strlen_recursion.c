#include "main.h"

/**
* _strlen_recursion(char *s) - prints the length of a string
* @s: length of a string
* return: 0
*/
int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
