#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int handle_format(char specifier, va_list args);
int print_chr(int c);
int print_binry(unsigned int n);
int print_unsgnd(unsigned int n, int base);

#endif /* MAIN_H */
