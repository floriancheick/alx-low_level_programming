#include "main.h"

/**
*_memset - this function fills the memory with constant bytes
*@s: location to fill
*@b: char to fill location with
*@n: number of bytes to fill
*Return: returns pionter to location fillles
*/
char *_memset(char *s, char b, unsigned int n)
{
char *start = s;
while(n--)
{
*s=b;
s++;
}
return (start);
}
