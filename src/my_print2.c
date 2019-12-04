/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** godeffroy.roue
*/

#include "my.h"

void print_pointer(char *format, int i, va_list args)
{
	if (format[i] == 'p') {
		my_putstr("0x");
		my_put_hexa(va_arg(args, long int), 39);
	}
}

void print_binary(char *format, int i , va_list args)
{
	if (format[i] == 'b')
		my_put_nbr(va_arg(args, int), 2);
}

void my_cprints(char *str, int i)
{
	if (str[i] >= 1 && str[i] < 8)
		my_putstr("00");
	else if (str[i] >= 8 && str[i] < 32)
		my_putstr("0");
	my_put_nbr(str[i], 8);
}

void print_mods(char *str)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] < 32 || str[i] >= 127) {
			my_putchar('\\');
			my_cprints;
		}
		else
			my_putchar(str[i]);
	}
}
