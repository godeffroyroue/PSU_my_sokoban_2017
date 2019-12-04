/*
** EPITECH PROJECT, 2017
** flagsss
** File description:
** godeffroy.roue
*/

#include "my.h"

int map_list(int ac, char **av)
{
	if ((my_strcmp(av[1], "-list")) == 0) {
		my_printf("MAP LIST\n");
		my_printf("	- fmap\n");
		return (0);
	}
	return (0);
}

int main_help(int ac, char **av)
{
	if (ac > 1) {
		if ((my_strcmp(av[1], "-h")) == 0) {
			my_printf("USAGE\n");
			my_printf("        ./my_sokoban map\n");
			my_printf("FOR LIST MAP\n");
			my_printf("        ./my_sokoban -list\n");
			my_printf("DESCRIPTION\n");
			my_printf("        map file representing the");
			my_printf(" warehouse map, containing '#'");
			my_printf(" for walls,\n");
			my_printf("                'P' for the player, for");
			my_printf(" boxes and 'O' for storage locations.\n");
			return (0);
		}
		map_list(ac, av);
	}
	return (0);
}

char **choose_map(int ac, char *av)
{
	char **tab;
	int test;

	if (ac == 2) {
		tab = my_sokoban_alg(ac, av);
	}
	return (tab);
}

s_coord *find_posp(char **map, int *count, s_coord *player)
{
	for (int i = 0; i != count[1]; i++) {
		for (int j = 0; j != count[0]; j++) {
			verif_posp(map, player, i, j);
		}
	}
	return (player);
}

int my_sokoban(int ac, char **av)
{
	char **map;
	int *count;
	int *f_o;
	struct s_coord *player = malloc(sizeof(struct s_coord));
	int verif;

	if (ac == 2) {
		main_help(ac, av);
		if ((verif = open(av[1], O_RDONLY)) == -1) {
			exit (84);
		}
		count = count_lign(av[1]);
		map = choose_map(ac, av[1]);
		f_o = find_o(map, count);
		find_posp(map, count, player);
		play_game(map, count, player, f_o);
	}
	else
		exit (84);
	return (0);
}
