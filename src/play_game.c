/*
** EPITECH PROJECT, 2017
** play_game
** File description:
** Godeffroy
*/

#include "my.h"

void move_player(s_coord *p, char **map, int key)
{
	if ((key == KEY_UP) && (map[p->y - 1][p->x]) != '#') {
		key_up(p, map);
	}
	else if ((key == KEY_DOWN) && (map[p->y + 1][p->x]) != '#') {
		key_down(p, map);
	}
	else if ((key == KEY_LEFT) && (map[p->y][p->x - 1]) != '#') {
		key_left(p, map);
	}
	else if ((key == KEY_RIGHT) && (map[p->y][p->x + 1]) != '#') {
		key_right(p, map);
	}
}

void print_map(int row, int col, char **map)
{
	for (int i = 0; i < row; i++) {
		mvprintw((LINES /2) + i - (row / 2), ((COLS - col) /2),
		"%s\n", map[i]);
	}
}

int print_win(int key, int row, int col)
{
	clear();
	while (key != 32) {
		refresh();
		mvprintw((LINES /2) - (row / 2), ((COLS - col) /2),
		"YOU WIN\n");
		mvprintw((LINES /2) + 1 - (row / 2), ((COLS - col) /2),
		"For restart the game, Please press 'SPACE BAR'\n");
		key = getch();
	}
	return (32);
}

int play_game(char **map, int *count, s_coord *player, int *find_o)
{
	int row = count[1];
	int col = count[0];
	int key;

	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	curs_set(0);
	while (key != 32) {
		print_map(row, col, map);
		key = getch();
		move_player(player, map, key);
		verif_o(find_o, map, count);
		if ((verif_win(find_o, map)) == 1)
			key = print_win(key, row, col);
		refresh();
	}
	endwin();
}
