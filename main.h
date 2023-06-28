#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void putchar_dec(int num, int *len);
void conv_binary(unsigned int n, int *len);
void putchar_uns(unsigned int num, int *len);
void putchar_oct(unsigned int num, int *len);
void small_hex(unsigned int num, int *len);
void big_hex(unsigned int num, int *len);
void printString(const char *str, int *len);
void charToHex(char c);

#endif /* MAIN_H */
