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
	if (num < 0)
	{
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

	_putchar(num % 8 + '0');
	*len += 1;
}

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
/**
 * charToHex - A function that converts a char to hexadecimal
 * @c: character to be converted
 *
 * Return: nothing
 */

void charToHex(char c)
{
	unsigned char i = (unsigned char)c;
	unsigned char upper = (i >> 4) & 0xF;
	unsigned char lower = i & 0xF;
	unsigned char hexupper = (upper < 10) ? '0' + upper : 'A' + (upper - 10);
	unsigned char hexlower = (lower < 10) ? '0' + lower : 'A' + (lower - 10);
	_putchar(hexupper);
	_putchar(hexlower);
}
/**
 * printString - a functio that prints a string
 * @str: character to be printed
 *
 * Return: nothing
 */

void printString(const char *str)
{
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			charToHex(*str);
		}
		else
		{
			_putchar(*str);
		}
		str++;
	}
}