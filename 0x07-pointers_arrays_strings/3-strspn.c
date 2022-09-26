#include "main.h"

/**
*_strspn - this function that gets the length of a prefix substring
*@s: input string
*@accept: input character with to locate into string s
*Return:  returns pointer to c position
*/
unsigned int _strspn(char *s, char *accept)
{
int digt = 0, flag;
char *start =  accept;

while (*s)
{
flag = 0;
while (*accept)
{
if (*accept == *s)
{
digt++;
flag = 1;
break;
}
accept++;
}
s++;
accept = start;
if (flag == 0)
break;
}
return (digt);
}
