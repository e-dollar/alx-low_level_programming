#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: c is an ascii character
 *
 * Return: 1 (if letter)
 */

int _islower(int c)
{
if (c >='a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
