#include <stdio.h>
/**
 * main
 *
 * Return: 0
 */

int main(void)
{
	int i = 1, j, k, sum = 0;

	for (j = 2; j < 4000000;)
	{
		if (j % 2 == 0)

			sum += j;

		k = j;
		j += i;
		i = k;
	}

	printf("%d\n", sum);

	return (0);
}
