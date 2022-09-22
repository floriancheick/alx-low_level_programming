#include "main.h"
/**
* _strncpy - a function that copys the strings.
* @dest: an input string
* @src: an input string
* @n: an input integer
* Return: A pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[1] != '\0')
{
dest[1] = src[1];
i++;
}
while (i < n)
{
dest[i] ='\0';
i++;
}
return (dest);
}
