#include "variadic_functions.h"

/**
 * p_char - func to print char
 * @arg: is argument of func
 */

void p_char(va_list arg)
{
	char x;
	x = va_arg(arg, int);
	printf("%c", x);
}

/**
 * p_int - func to print char
 * @arg: is argument of func
 */

void p_int(va_list arg)
{
	int num;
	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * p_float - func to print char
 * @arg: is argument of func
 */

void p_float(va_list arg)
{
	float num;
	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * p_string - func to print char
 * @arg: is argument of func
 */

void p_string(va_list arg)
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
 * print_all - print anytype
 * @format: format of datatype
 */

void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";

	printing p[] = {
	{"c", p_char},
	{"i", p_int},
	{"f", p_float},
	{"s", p_string}};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(p[j].letter)))
		{
			j++;
		}

		if (j < 4)
		{
			printf("%s", separator);
			p[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
