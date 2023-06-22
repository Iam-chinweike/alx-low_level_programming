#include "main.h"

/**
 *_isalpha- prints the alphabets once the set criteria is met
 *@c - variable to be checked
 *Return: 1 or 0 depending on the output
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
