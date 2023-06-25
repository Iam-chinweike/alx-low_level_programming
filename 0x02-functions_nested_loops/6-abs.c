#include "main.h"
/**
 *_abs - prints the absolute value
 *@d: is the type of the argument
 *Return: the absolute value
 */
int _abs(int d)
{
if (d < 0)
{
int abval;
abval = d * -1;
}
else if (d >= 0)
{
abval = d;
}
return (abval);
}
