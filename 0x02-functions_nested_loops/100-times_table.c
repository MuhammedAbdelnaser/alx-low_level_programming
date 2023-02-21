#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
int i, j, k, l, m;

if (n > 15 || n < 0)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = i * j;
l = k / 100;
m = (k / 10) % 10;
k = k % 10;
if (l > 0)
_putchar(l + '0');
else if (j != 0)
_putchar(' ');
if (m > 0 || l > 0)
_putchar(m + '0');
else if (j != 0)
_putchar(' ');
_putchar(k + '0');
if (j != n)
{
_putchar(',');
_putchar(' ');
if ((i * (j + 1)) < 100)
_putchar(' ');
if ((i * (j + 1)) < 10)
_putchar(' ');
}
}
_putchar('\n');
}
}
