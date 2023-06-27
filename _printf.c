#include "main.h"

/**
 * _printf - This function is similar to the standard printf.
 * @format: const char literal.
 *
 * Return: the number of charaters printed.
 * On error, -1 is returned, and error is set appropriately.
 */

int _printf(const char *format, ...)
{
	int i, len = 0;
	char *s_var;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			len++;
			_putchar(format[i]);
		}
		else
		{
			switch (format[++i])
			{
				case 'c':
					len++;
					_putchar(va_arg(args, int));
					break;

				case 's':
					for (s_var = va_arg(args, char*); *s_var; s_var++)
					{
						_putchar(*s_var);
						len++;
					}
					break;

				case 'i':
				case 'd':
					putchar_dec(va_arg(args, int), &len);
					break;

				case 'b':
					conv_binary(va_arg(args, unsigned), &len);
					break;

				case 'u':
					putchar_uns(va_arg(args, unsigned), &len);
					break;

				case 'o':
					putchar_oct(va_arg(args, unsigned), &len);
					break;

				case 'x':
					small_hex(va_arg(args, unsigned), &len);
					break;

				case 'X':
					big_hex(va_arg(args, unsigned), &len);
					break;

				default:
					_putchar(format[i]);
					len++;
					break;
			}
		}
	}
	va_end(args);
	return (len);
}
