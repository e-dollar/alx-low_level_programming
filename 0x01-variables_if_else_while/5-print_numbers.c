#include <stdio.h>
/**
*main - print all the single digits in base 10
*Description: it will print the numbers from 0 to 9.
*Return: always return 0 (Success)
*/

int main(void)
{
int i;
i = 48;
while (i < 58)
{
putchar(i);
i++;
}
putchar(10);
return (0);
}
