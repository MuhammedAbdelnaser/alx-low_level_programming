// Write a C program that prints the size of various types on the computer it is compiled and run on.

#include <stdio.h>

/**
 * main - Prints the size of various types on the computer it is compiled and run on.
 *
 * Return: Always 0.
 */
int main(void)
{
    char charType;
    int intType;
    long int longIntType;
    long long int longLongIntType;
    float floatType;

    printf("Size of a char: %zu byte(s),\n", sizeof(charType));
    printf("Size of an int: %zu byte(s),\n", sizeof(intType));
    printf("Size of a long int: %zu byte(s),\n", sizeof(longIntType));
    printf("Size of a long long int: %zu byte(s),\n", sizeof(longLongIntType));
    printf("Size of a float: %zu byte(s),\n", sizeof(floatType));

    return (0);
}
