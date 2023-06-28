#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n:- variable to be considerd
 *Return: last digit to main
 */

int print_last_digit(int n)
{
int last_digit;

last_digit = n % 10;
if (last_digit < 0)
{
last_digit = n * -1;
}
_putchar(last_digit + '0');
return (last_digit);
}
