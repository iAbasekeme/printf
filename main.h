#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void putchar_dec(int num, int *len);
void conv_binary(unsigned int n, int *len);
void putchar_uns(unsigned int num, int *len);

#endif /* MAIN_H */
