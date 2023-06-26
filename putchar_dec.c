#include "main.h"

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
