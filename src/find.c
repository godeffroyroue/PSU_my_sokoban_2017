/*
** EPITECH PROJECT, 2017
** find.c
** File description:
** godeffroy.roue
*/

#include "my.h"

int cond_find(char **map, int j, int i)
{
	if (map[j][i] == 'O') {
		return (1);
	}
	return (0);
}

int change_tab(int *tab, int c, int i, int j)
{
	tab[c] = i;
	c++;
	tab[c] = j;
	c++;
	return (c);
}

int *find_o(char **map, int *count)
{
	int *tab = malloc(sizeof(int) * (count[0] * count[1] + 1));
	int c = 0;

	for (int j = 0; j != count[1]; j++) {
		for (int i = 0; i != count[0]; i++) {
			((cond_find(map, j, i)) == 1 ?
			c = change_tab(tab, c, i, j) : 0);
		}
	}
	tab[c] = 0;
	tab[c + 1] = 0;
	return (tab);
}

int count_o(int *find_o)
{
	int i = 0;
	int nbr = 0;

	while (find_o[i] != 0) {
		i++;
	}
	nbr = i / 2;
	return (nbr);
}

void verif_o(int *find_o, char **map, int *count)
{
	int i = 0;
	int a;
	int b;

	while (find_o[i] != 0) {
		a = find_o[i];
		i++;
		b = find_o[i];
		if (map[b][a] == ' ') {
			map[b][a] = 'O';
		}
		i++;
	}
}
