#include <stdio.h>

/**
*main - print letters of alphabet
*Description: print all the letters of the alpabets inversely
*Return: always return 0 (success)
*/

int main(void)
{
int i;
i = 122;
while (i > 96)
{
putchar(i);
i--;
}
putchar(10);
return (0);
}
