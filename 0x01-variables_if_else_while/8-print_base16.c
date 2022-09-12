#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 *Return: Always 0 
 *
 */
int main(void)
{
  int i;
  char lower;
  for (i = '0'; i <= '9'; i++)
    putchar(i);
  for (lower = 'a'; lower <= 'f'; lower++)
    putchar(lower);
  putchar('\n');
  return (0);
}
