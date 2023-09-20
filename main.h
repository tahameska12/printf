#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
/**
 *struct main - struct specifier
 *@id:spicifier pointer
 *@f:the right association function
 *
*/
typedef struct main
{
char *id;
int (*f)();
} format_s;
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_percentage(void);
int _putchar(char c);
int print_int(va_list);
int print_dec(va_list);

#endif
