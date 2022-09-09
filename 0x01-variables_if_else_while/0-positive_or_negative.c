#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - determine the number of positive or negative
*
* Description: program will assign a random number to the variable n each time it is executed.
*
* Return: always 0 (success)
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative", n);
else
printf("%d is positive", n);
return (0);
}
