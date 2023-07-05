#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: 0 on Success
 */

void print_diagsums(int *a, int size)
{
int sum, sum2, y;

sum = 0;
tim = 0;

for (y = 0; y < size; y++)
{
sum = sum + a[y * size + y];
}

for (y = size - 1; y >= 0; y--)
{
tim += a[y * size + (size - y - 1)];
}

printf("%d, %d\n", sum, tim);
}
