#include "main.h"

/**
 * reverse_array : function reverse array
 * @a: array
 * @n: the number of elements of the array
 * Return : void
 */
void reverse_array(int *a, int n)
{
    int i = 0;
    int revarr;

    while (i < n--)
    {
        revarr = a[i];
        a[i++] = a[n];
        a[n] = revarr;
    }
}
