/*
** EPITECH PROJECT, 2017
** find.c
** File description:
** godeffroy.roue
*/

#include "my.h"

s_coord *verif_posp(char **map, s_coord *player, int i, int j)
{
	if (map[i][j] == 'P') {
		player->x = j;
		player->y = i;
	}
	return (player);
}

int verif_win(int *find_o, char **map)
{
	int i = 0;
	int win = 0;
	int a = 0;
	int b = 0;
	int nbr_o = count_o(find_o);

	while (find_o[i] != 0) {
		a = find_o[i];
		i++;
		b = find_o[i];
		if (map[b][a] == 'X') {
			win++;
		}
		if (win == nbr_o)
			return (1);
		i++;
	}
}
