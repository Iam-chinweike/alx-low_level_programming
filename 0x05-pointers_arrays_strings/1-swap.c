#include "main.h"

/**
 * swap_int - changes the value of n to 98
 * @a: changes the value of a to b
 * @b: changes the value of b to a
 * Return: void on success
 */
void swap_int(int *a, int *b)
{
*a = &b;
*b = &a;
}
