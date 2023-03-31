#ifndef MAIN
#define MAIN
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>
int _printf(const char *format, ...);
int _putchar(char c);
int normal_process(const char *format, int l, va_list liste);
int process_function(va_list list, const char *format, int i, int f);
long int printing_number(va_list liste);
int numbers(long int n, long int c, int f);
void print_char(va_list p);
int print_string(va_list p);
 #endif
