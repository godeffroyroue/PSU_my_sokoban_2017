/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** godeffroy.roue
*/

#include "my.h"

int my_put_nbr(long int nb, int base)
{
	if (nb < 0) {
		my_putchar('-');
		nb = -nb;
	}
	if (nb < base)
		my_putchar(nb % base + '0');
	if (nb >= base) {
		my_put_nbr((nb / base), base);
		my_putchar(nb % base + '0');
	}
	return (nb);
}
