#include <stdio.h>
#include <stdlib.h>
/**
* main - print the result of the multiplication, followed by a new line.
* @argc: arguments count.
* @argv: arguments.
* Return: 0
*/
int main(int argc, char **argv)
{
int i, j;
if (argc < 2)
{
    printf("Error\n");
}
for (i = 1; i < argc; i++)
{
    j = atoi(argv[i]);
    j *= atoi(argv[i + 1]);
    printf("%d\n", j);
}
return (0);
}