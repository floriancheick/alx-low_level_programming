#include "main.h"
#include <stdio.h>

/**
*_strpbrk - this function searches  for string in any set of bytes.
*@s: input string
*@accept: input character located int string string s
*Return: matches one bytes in accept or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
char *start = accept;

while (*s)
{
while (*accept)
{
if (*accept == *s)
return (s);
accept++;
}
accept = start;
s++;
}
return (NULL);
}
