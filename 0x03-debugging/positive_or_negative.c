#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - The entry point of the program
 *
 *Return: Always 0
 */
int positive_or_negative(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 0)
    printf("%d is positive\n", n);
  else if (n == 0)
    printf("%d is zero\n", n);
  else
    printf("%i is negative\n", n);
  return (0);
}