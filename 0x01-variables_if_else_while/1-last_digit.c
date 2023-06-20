#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a number on the scren
 * Return: 0 on success
 */
int main(void)
{
int n, last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
last_digit = n % 10;
if (n > 5)
{
printf("%d and is greater than 5\n", last_digit);
}
else if (n < 6 && n != 0)
{
printf("%d and is less than 6 and not 0\n", last_digit);
}
else
{
printf("%d and is 0\n", last_digit);
}
return (0);
}
