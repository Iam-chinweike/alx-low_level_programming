#include <stdio.h>
/**
 * main - displays the hex values in small characters
 * Return: 0 on success
 */
int main(void)
{
int i;
char betty;

for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
}
for (betty = 'a'; betty <= 'f'; betty++)
{
putchar(betty);
}
putchar('\n');
return (0);
}
