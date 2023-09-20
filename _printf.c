#include "main.h"
/**
 *_printf-function simulate printf
 *@format:string format
 *Return: printed string lenght
 */
int _printf(const char *format, ...)
{
format_s m[] = {
{"%c", print_char}, {"%s", print_string},
{"%%", print_percentage}, {"%d", print_dec},
{"%i", print_int}, {0, NULL}
};
va_list args;
int i = 0, j, len = 0;
va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
{
return (-1);
}
while (format[i] != '\0')
{
if (format[i] == '%')
{
j = 0;
while (m[j].id != NULL)
{
if (format[i + 1] == m[j].id[1])
{
len += m[j].f(args), i += 2;
break;
}
j++;
}
if (m[j].id == NULL)
{
_putchar('%'), _putchar(format[i + 1]), len += 2, i += 2;
}
}
else
{
_putchar(format[i]), len++, i++;
}
}
va_end(args);
return (len);
}

