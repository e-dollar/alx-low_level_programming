#include "main.h"


/**
 * string_toupper - changes all lowercase of string to uppercase
 * @s: string array
 * Return: string array
 */

char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i >= 'a' && i <= 'z')
{
str[i] = str[i] - 32;
}
}
}
