#include "main.h"

/**
*_memcpy - this function that copys memory area
*@dest: memory area destination to copy
*src: memory area source to copy from
*@n: number od bytes
*Return: returns pointer to copy location
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *start = dest;
while(n--)
{
*dest = *src;
src++;
dest++;
}
return (start);
}
