#include "main.h"

/**
 *_isupper 
 *@c: tested character
 *Return: returns 1 if it is uppercase, 0 if not
 */
int _isupper(int c)
{
  char upper = 'A';
  int isupper = 0;

  for(; upper <= 'Z'; upper++)
    {
      if (c == upper)
	{
	  isupper = 1;
	  break;
	}
    }

  return (isupper);
}
