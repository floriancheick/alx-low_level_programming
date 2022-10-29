#include "main.h"

/**
 * flip_bits - Counts the number.
 * @n: The number.
 * @m: The number to flip n to.
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int lez = n ^ m, bits = 0;

	while (lez > 0)
	{
		bits += (lez & 1);
		lez >>= 1;
	}

	return (bits);
}
