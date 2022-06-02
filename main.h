#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
void _putchar(char c);
void print_hex(unsigned int n, int ch);
int print_h_lower(const va_list ls);
int print_h_upper(const va_list ls);
int bin_digits(unsigned int n);
void print_bin(unsigned int n);
int print_b(va_list ls);
int print_oct(va_list ls);
int print_o(unsigned int n);
int print_c(va_list ls);
int print_s(va_list ls);
int print_uns(va_list ls);
int print_d(int n);
int print_u(unsigned int n);
int print_p(unsigned long int n);
int print_int(va_list ls);
int print_ptr(va_list ls);
int print_percent(va_list ls);
int (*get_func(char c))(va_list);
int _printf(char *fmt, ...);
#endif
