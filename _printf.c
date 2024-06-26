#include "main.h"

/**
 * _printf - Custom implementation of printf.
 * @format: Format string.
 * Return: Number of characters printed.
 *
 * Processes format string and arguments, handling format specifiers.
 */

int _printf(const char *format, ...)
{
	int size;
	va_list list;

	if (format == NULL)
		return (-1);
	size = _strlen(format);
	if (size <= 0)
		return (0);
	va_start(list, format);
	size = handler(format, list);
	_putchar(-1);
	va_end(list);
	return (size);
}
