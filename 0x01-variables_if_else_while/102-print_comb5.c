#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point of the program
 *
 *Return: Always 0
 */
int main(void)
{
  int i = 0, i2;
  while (i <= 99)
    {
      i2 = i;
      while (i2 <= 99)
	{
	  if (i2 != i)
	    {
	      putchar((i / 10) + 48);
	      putchar((i % 10) + 48);
	      putchar(' ');
	      putchar((i2 / 10) + 48);
	      putchar((i2 % 10) + 48);
	      if (i != 98 || i2 != 99)
		{
		  putchar(',');
		  putchar(' ');
		}
	    }
	  ++i2;
	}
      ++i;
    }
  putchar('\n');
  return (0);
}
