#include "main.h"

/**
 * swap_int - swaps the values of two variables
 * @a: changes the value of a to b
 * @b: changes the value of b to a
 * Return: void on success
 */
void swap_int(int *a, int *b)
{
int kemz;

kemz = *a;
*a = *b;
*b = kemz;
}
