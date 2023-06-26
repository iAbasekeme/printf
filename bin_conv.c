#include "main.h"

/**
 * conv_binary - This function converts unsigned int to binary.
 * @n: unsigned int
 * @len: pointer to int
 *
 * Return: none
 */

void conv_binary(unsigned int n, int *len)
{
	if (n > 1)
		conv_binary(n >> 1, len);

	_putchar((n & 1) + '0');
	*len += 1;
}
