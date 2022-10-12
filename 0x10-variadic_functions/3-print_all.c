#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
* print_char - Prints a char.
* @arg: A list of arguments
*/
void print_char(va_list arg)
{
	char l;

	l =  va_arg(arg, int);
	printf("%c", l);
}
/**
* print_int - Prints an int
* @arg: A list of arguments
*/
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}
/**
* print_float - Prints a float.
* @arg: A list of arguments
*/
void print_float(va_list arg)
{
	float n;

	n = va_arg(arg, double);
	printf("%f", n);
}
/**
* print_string - Prints a string
* @arg: A list of arguments
*/
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
* print_all - Prints anything
* @format:
*
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;
	
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
	
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}


