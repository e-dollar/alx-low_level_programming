#include <stdio.h>

/**
*main - prints all single digits in base 10
*Description: prints numbers from 0 - 9
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
