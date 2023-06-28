#include "main.h"

/**
 * small_hex - convert unsigned int to small hexadecimal.
 * @num: unsigned int
 * @len: pointer to int
 *
 * Return: none.
 */

void small_hex(unsigned int num, int *len)
{
	if (num > 15)
		small_hex(num / 16, len);

	num = num % 16;
	if (num > 9 && num <= 15)
	{
		_putchar(num % 10 + 97);
		*len += 1;
	}
	else
	{
		_putchar(num + '0');
		*len += 1;
	}
}

/**
 * big_hex - convert unsigned int to big hexadecimal.
 * @num: unsigned int
 * @len: pointer to int
 *
 * Return: none.
 */

void big_hex(unsigned int num, int *len)
{
	if (num > 15)
		big_hex(num / 16, len);

	num = num % 16;
	if (num > 9 && num <= 15)
	{
		_putchar(num % 10 + 65);
		*len += 1;
	}
	else
	{
		_putchar(num + '0');
		*len += 1;
	}
}
