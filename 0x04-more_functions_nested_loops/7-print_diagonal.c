#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number of times
 * Return: void
 */



void print_diagonal(int n)
{
int lines, spaces;
lines = 0;
if (n > 0)
{
while (lines < n)
{
for (spaces = 0; spaces < lines; spaces++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
lines++
}
}
else
{
_putchar('\n');
}
}
