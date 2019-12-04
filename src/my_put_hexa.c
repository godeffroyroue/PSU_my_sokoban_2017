/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** godeffroy.roue
*/

#include "my.h"

int my_put_hexa(long int nb, int diff_ascii)
{
	if (nb >= 10 && nb <= 15)
		my_putchar(nb % 16 + diff_ascii + '0');
	if (nb <= 9)
		my_putchar(nb % 16 + '0');
	if (nb >= 16) {
		my_put_hexa((nb / 16), diff_ascii);
		my_put_hexa((nb % 16), diff_ascii);
	}
	return (nb);
}
