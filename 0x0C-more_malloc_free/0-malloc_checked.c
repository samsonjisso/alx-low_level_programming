#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
    int *ptr;
    ptr = (int*)malloc(b * sizeof(int));
    return (ptr);
}