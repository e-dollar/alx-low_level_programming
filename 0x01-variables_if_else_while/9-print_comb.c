#include <stdio.h>

/**
*main - prints number combinations
*Description: prints single numbers with commas
*Return: always return 0 (success)
*/

int main(void)
{
int i;
i = 48;
while (i < 58)
putchar(i);
{
if (i != 57)
{
putchar(32);
putchar(44);
}
i++;
}
putchar(10);
return (0);
}
