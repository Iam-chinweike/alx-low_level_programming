#include <stdio.h>
/**
 * main- prints possible combination of singlr digit numbers
 * Return: 0 on success
 */
int main(void)
{
int deo;

for (deo = 0; deo < 10; deo++)
{
putchar(deo + '0');
if (deo < 9)
{
putchar(',');
putchar(' ');
}
}
return (0);
}
