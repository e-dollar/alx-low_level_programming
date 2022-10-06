#include "main.h"
#include <stdlib.h>



/**
 * malloc_checked - allocates memory using malloc
 * @b: int size of memory to be allocated
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(sizeof(int) * b);
if (ptr == NULL)
{
exit (98);
}
return (ptr);
}
