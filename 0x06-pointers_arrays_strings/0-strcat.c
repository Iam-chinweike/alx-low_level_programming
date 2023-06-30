#include "main.h"

/**
 *_strcat - concatenates to strings
 *@dest: - contains the destination strings
 *@src: - contains the source string
 *Return: dest on success
 */

char *_strcat(char *dest, char *src)
{
char *p = dest;

while (*p != '\0')
{
p++;
}
while (*src != '\0')
{
*p = *src;
p++;
src++;
}
*p = '\0';
return (dest);
}
