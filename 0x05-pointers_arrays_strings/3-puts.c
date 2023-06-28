#include "main.h"

/**
 * _puts - prints strings to the stdout
 * @str: is the variable useid
 * Returns: nothing on success
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
