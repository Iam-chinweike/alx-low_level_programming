#include "main.h"

/**
 * _puts - prints strings to the stdout
 * @str: is the variable used
 * Returns: nothing on success
 */

void _puts(char *str)
{
for (; *str != '\0'; *str++)
{
_putchar(*str);
}
_putchar('\n');
}
