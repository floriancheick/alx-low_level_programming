#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int i = 0, i1;
  while (i <= 9)
    {
      i1 = 0;
      while (i1<= 9)
	{
	  if (i !=  i1 && i < i1)
	    {
	      putchar(i + 48);
	      putchar(i1 + 48);
	      if (i + i1 != 17)
		{
		  putchar(',');
		  putchar(' ');
		}
	    }
	  ++i1;
	}
      ++i;
    }
  putchar ('\n');

  return (0);
}
