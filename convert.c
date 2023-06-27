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

/**
 * putchar_dec - output decimal using putchar.
 * @num: int
 * @len: pointer to int
 *
 * Return: none.
 */

void putchar_dec(int num, int *len)
{
    if (num < 0) {
        _putchar('-');
        *len += 1;
        num = -num;
    }
    if (num > 9)
        putchar_dec(num / 10, len);

    _putchar(num % 10 + '0');
    *len += 1;
}

/**
 * putchar_uns - output unsigned int using putchar
 * @num: unsigned int
 * @len: pointer to int
 *
 * Return: none.
 */

void putchar_uns(unsigned int num, int *len)
{
	if (num > 9)
		putchar_dec(num / 10, len);

	_putchar(num % 10 + '0');
	*len += 1;
}

/**
 * putchar_oct - convert unsigned int to octal.
 * @num: unsigned int
 * @len: pointer to int
 *
 * Return: none.
 */

void putchar_oct(unsigned int num, int *len)
{
	if (num > 7)
		putchar_oct(num / 8, len);

	putchar(num % 8 + '0');
	*len += 1;
}
