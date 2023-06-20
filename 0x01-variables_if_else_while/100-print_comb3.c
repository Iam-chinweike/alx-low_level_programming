#include <stdio.h>
/**
 * main- prints all possible different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) 
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: 0 on success
 */
int main(void)
{
int yey, yoh;
for (yey = 0; yey < 9; yey++)
{
for (yoh = yey + 1; yoh < 10; yoh++)
{
putchar((yey % 10) + '0');
putchar((yoh % 10) + '0');
if (yey == 8 && yoh == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
