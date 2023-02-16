#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main() 
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
printf("Size of a float: %zu bytes(s)\n", sizeof(floatType));
printf("Size of a double: %zu bytes(s)\n", sizeof(doubleType));
return (0);
}
