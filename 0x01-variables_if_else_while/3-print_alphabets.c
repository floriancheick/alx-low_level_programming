#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -  Entry point of the program
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
  char lower;
  char upper;

  for (lower = 'a'; lower <= 'z'; lower++)
    putchar(lower);
  for (upper = 'A'; upper <= 'Z'; upper++)
    putchar(upper);
  putchar('\n');
  return (0);
}
