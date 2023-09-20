#include "main.h"
/**
  *print_string - function that print string
  *@ptr:the string given to th function
  *Return:string lenght
  */
int print_string(va_list ptr)
{
int len = 0;
char *s = va_arg(ptr, char*);
if (s == NULL)
{
s = "(null)";
}
while (s[len] != '\0')
{
len++;
}
write(1, s, len);
return (len);
}
