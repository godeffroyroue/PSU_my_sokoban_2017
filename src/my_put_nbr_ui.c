/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** godeffroy.roue
*/

#include "my.h"

int my_put_nbr_ui(unsigned int nb)
{
	if (nb > 0 && nb < 10)
		my_putchar(nb % 10 + '0');
	if (nb >= 10) {
		my_put_nbr((nb / 10), 10);
		my_putchar(nb % 10 + '0');
	}
	return (nb);
}
