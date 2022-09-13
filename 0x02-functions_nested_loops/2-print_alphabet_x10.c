#include "main.h"

/**
*print_alphabet_x10 - prints alphabets 10 times
*return (void)
*/


void print_alphabet_x10(void)
{
int i = 0;
char l = 'a';
while (i < 10)
{
l = 'a';
while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
i++;
}
}
