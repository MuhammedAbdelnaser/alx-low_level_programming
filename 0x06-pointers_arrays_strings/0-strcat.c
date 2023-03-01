#include "main.h"

/**
 * _strcat - a function that concatenates 2 strings 
 * @dest: char 
 * @src: char 
 * Return char 
 */
char *_strcat(char *dest, char *src)
{
    char *str = dest;

    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (str);
}
