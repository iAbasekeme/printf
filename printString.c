#include "main.h"

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
 * printString - prints string
 * @str: char literal
 *
 * Return: void
 */

void printString(const char *str, int *len)
{
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			charToHex(*str);
			*len += 1;
		}
		else
		{
			_putchar(*str);
			*len += 1;
		}
		str++;
	}
}