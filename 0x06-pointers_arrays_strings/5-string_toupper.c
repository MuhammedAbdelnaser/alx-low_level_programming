#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return:char
 */
char *string_toupper(char *s)
{
char *start = s;

while (*s)
{
if (*s >= 'a' && *s <= 'z')
{
*s -= 32;
}
s++;
}
return (start);
}
