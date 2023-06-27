#include "main.h"

/**
 * swap_init - changes the value of n to 98
 * @a: changes the value of a to b
 * @b: changes the value of b to a
 * @temp: serves as a holder
 * Return: void on success
 */
void swap_int(int *a, int *b)
{
int *temp;

temp = a;
a = b;
b = temp;
}
