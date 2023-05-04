#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cpt = 0;
	unsigned long int curr;
	unsigned long int result = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = result >> i;
		if (curr & 1)
			cpt++;
	}

	return (cpt);
}

