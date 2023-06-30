#include "main.h"

/**
 *_strncat - prints a certain munber of xters during concatenation
 *@dest: - is the destination string
 *@src: - is the source string
 *@n: - the number of characters to print
 *Return: destination on success
 */

char *_strncat(char *dest, char *src, int n)
{
char *p;

while (*p != '\0')
{
p++;
}
while (*src != '\0' && n > 0)
{
*p = *src;
p++;
src++;
n--;
}
*p = '\0';
return (dest);
}
