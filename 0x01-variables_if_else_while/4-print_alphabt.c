#include <stdio.h>
/**
 * main - prints all alhabets except two alphabet
 * Return: 0 on success
 */
int main(void)
{
char sheet;
for (sheet = 'a'; sheet <= 'z'; sheet++)
{
if (sheet != 'j' && sheet != 'e')
putchar(sheet);
}
putchar('\n');
return (0);
}
