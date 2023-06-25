#include "main.h"

/**
 *print_sign- prints out tge signs according to set criteria
 *@n: is th variable being checked
 *Return: values acording to their set conditions
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-')
return (-1);
}
else if (n == 0)
{
_putchar('0')
return (0);
}
else
{
_putchar(' ');
return ('/');
}
}
