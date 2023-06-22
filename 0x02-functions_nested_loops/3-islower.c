#include "main.h"
/**
 *_islower - checks if int c is a lowercase alphabet
 *@c:- is the character to be checked
 *Return: 1 on success amd 0 if condition isnt met
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
