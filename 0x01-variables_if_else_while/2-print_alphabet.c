#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - Entry point of the program
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
  char lower;
  for (lower = 'a'; lower <= 'z'; lower++)
    putchar(lower);
    putchar('\n');

  return (0);
}
