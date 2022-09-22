#include "main.h"


/**
 * leet - function that encodes a string into 1337
 * @s: string array
 * Return: string array
 */



char *leet(char *s)
{
int indx1 = 0, indx2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
while (str[indx1])
{
for (indx2 = 0; indx2 <= 7; indx2++)
{
if (str[indx1] == leet[indx2] ||
str[indx1] - 32 == leet[indx2])
str[indx1] = indx2 + '0';
}
indx1++;
}
return (str);
}
