#include "main"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */






void print_line(int n)
{
int line;
line = 0;
while (n > line)
{
_putchar('_');
line++;
}
_putchar('\n');
}
