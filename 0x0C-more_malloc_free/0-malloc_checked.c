#include <stdlib.h>

/**
 * malloc_checked - memory allocater and checker function
 * @b: interger to be allocated
 * Return: pointer to the memory allocated
*/

void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = (int *)malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
