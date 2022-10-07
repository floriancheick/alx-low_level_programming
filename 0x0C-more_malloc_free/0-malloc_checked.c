#include "main.h"

/**
*malloc_checked - allocate memory.
*@b: size of the memory to be allocated.
*Return: pointer;
**/

void *malloc_checked(unsigned int b)
{
void *pt;
pt = malloc(b);
if (pt == NULL)
{
exit(98);
}

return (pt);
}
