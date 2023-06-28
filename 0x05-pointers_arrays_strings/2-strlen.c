#include "main.h"

/**
 * _strlen - prints the string lenght
 * @s: assighned a char value
 * Return: the value of the lenght
 */

int _strlen(char *s)
{
int tim;

tim = 0;
while (*s++)
{
tim++;
}
return (tim);
}
