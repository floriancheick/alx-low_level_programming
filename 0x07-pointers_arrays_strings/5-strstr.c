#include "main.h"
#include <stdio.h>

/**
*_strstr - this function locates a substring.
*@haystack: input string to search in
*@needle: input string to locate into string haystack
*Return:  Pointer to the beginning of the located substring or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
char *start1 = needle, *start2 = haystack;
while (*haystack)
{
start2 = haystack;
needle = start1;
while (*haystack == *needle)
{
haystack++;
needle++;
}

if (*needle == '\0')
return (haystack);
haystack = start2 +1;
}
return (NULL);
}
