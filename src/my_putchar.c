/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** godeffroy.roue
*/

#include "my.h"

int my_putchar(char c)
{
	static int count = 0;

	if (c < 0)
		return (count);
	write(1, &c, 1);
	count++;
	return (0);
}
