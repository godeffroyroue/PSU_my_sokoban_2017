/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** godeffroy.roue
*/

#include "my.h"

void print_int(char *format, int i, va_list args)
{
	if (format[i] == 'd' || format[i] == 'i') {
		my_put_nbr(va_arg(args, int), 10);
	}
}

void print_hexa(char *format, int i, va_list args)
{
	if (format[i] == 'X')
		my_put_hexa(va_arg(args, int), 7);
	if (format[i] == 'x')
		my_put_hexa(va_arg(args, int), 39);
}

void print_octa(char *format, int i, va_list args)
{
	if (format[i] == 'o') {
		my_put_nbr(va_arg(args, long), 8);
	}
	if (format[i] == '#' && format[i + 1] == 'o') {
		my_putchar('0');
		my_put_nbr(va_arg(args, long), 8);
	}
}

void print_char(char *format, int i, va_list args)
{
	if (format[i] == 's')
		my_putstr(va_arg(args, char*));
	if (format[i] == 'c')
		my_putchar(va_arg(args, int));
}

void print_unsigned_int(char *format, int i, va_list args)
{
	if (format[i] == 'u')
		my_put_nbr_ui(va_arg(args, unsigned int));
}
