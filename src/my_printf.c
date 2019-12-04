/*
** EPITECH PROJECT, 2017
** swap_elem
** File description:
** Godeffroy
*/

#include "my.h"

void space_back(char *format, int i)
{
	while (format[i] == ' ' || format[i] == '*')
		i++;
}

void my_flags(char *format, int i, va_list args)
{
	print_int(format, i, args);
	print_char(format, i, args);
	print_octa(format, i, args);
	print_hexa(format, i, args);
	print_unsigned_int(format, i, args);
	print_pointer(format, i, args);
	if (format[i] == '%')
		my_putchar('%');
	print_binary(format, i, args);
	((format[i] == 'S') ? print_mods(va_arg(args, char *)) : 0);
}

int my_printf(char *format, ...)
{
	va_list args;

	va_start (args, format);

	for (int i = 0; format[i] != '\0'; i++) {
		if (format[i] == '%') {
			i++;
			space_back(format, i);
			my_flags(format, i, args);
		}
		else
			my_putchar(format[i]);

	}
	va_end (args);
	my_putchar(-1);
}
