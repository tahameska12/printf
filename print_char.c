#include "main.h"
/**
  *print_char - function that print characters
  *@ptr:the string given to th function
  *Return: one
  */
int print_char(va_list ptr)
{
char s = va_arg(ptr, int);
write(1, &s, 1);
return (1);
}
