#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything (like...anything)
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0;
	char *s;
	char *separator = "";

	va_start(arguments, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(arguments, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arguments, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arguments, double));
				break;
			case 's':
				s = va_arg(arguments, char *);
				if (s == NULL)
					printf("%s(nil)", separator);
				else
					printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	va_end(arguments);
	printf("\n");
}

int main(void)
{
	print_all("ceis", 'B', 3, "stSchool");
	return (0);
}
