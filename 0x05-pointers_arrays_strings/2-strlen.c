#include "main.h"

/*
 *_strlen - return the length of the string
 *@s: string
 *Return: returns length of the integer;
 */

int _strlen(char *s)
{
  int len = 0;
  while (*(s + len) != '\0')
    len++;
  return (len);
}
