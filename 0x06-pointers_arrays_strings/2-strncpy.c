#include "main.h"

/**
 *_strncpy - copy string literals from src to dest
 *@dest: - contains destination strings
 *@src: - contains the source strings
 *@n: - contans the number of char to print
 *Return: dest on success
 */

char *_strncpy(char *dest, char *src, int n)
{
char *p;
int i;

p = dest;
for (i = 0; i < n && *src != '\0'; i++)
{
*p++ = *src++;
}
for (; i < n; i++)
{
*p++ = '\0';
}

return (dest);
}
