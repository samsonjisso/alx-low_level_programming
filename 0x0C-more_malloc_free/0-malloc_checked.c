#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
    int *ptr;
    ptr = (int*)malloc(b);
    if (ptr == NULL)
    {
        exit(98);
    }
    
    return (ptr);
}