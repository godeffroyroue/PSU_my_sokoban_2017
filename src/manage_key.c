/*
** EPITECH PROJECT, 2017
** play_game
** File description:
** Godeffroy
*/

#include "my.h"


int key_up_x(s_coord *p, char **map)
{
	if ((map[p->y - 1][p->x] == 'X') && (map[p->y - 2][p->x] != 'X')
	    && (map[p->y - 2][p->x] != '#')) {
		if (map[p->y - 2][p->x] == 'O') {
			map[p->y - 2][p->x] = 'X';
			map[p->y][p->x] = ' ';
			map[p->y - 1][p->x] = 'P';
			p->y -= 1;
			return (0);
		}
		else if (map[p->y - 2][p->x] == ' ') {
			map[p->y - 2][p->x] = 'X';
			map[p->y - 1][p->x] = 'P';
			map[p->y][p->x] = ' ';
			p->y -= 1;
			return (0);
	 	}
	}
}

void key_up(s_coord *p, char **map)
{
	if ((key_up_x(p, map)) == 0)
		return;
	else if (map[p->y - 1][p->x] == 'O') {
		map[p->y - 1][p->x] = 'P';
		map[p->y][p->x] = ' ';
		p->y -= 1;
	}
	else if (map[p->y - 1][p->x] == ' ') {
		map[p->y][p->x] = ' ';
		map[p->y - 1][p->x] = 'P';
		p->y -= 1;
	}
}

void key_down(s_coord *p, char **map)
{
	if ((key_down_x(p, map)) == 0)
		return;
	else if (map[p->y + 1][p->x] == 'O') {
		map[p->y + 1][p->x] = 'P';
		map[p->y][p->x] = ' ';
		p->y += 1;
	}
	else if (map[p->y + 1][p->x] == ' ') {
		map[p->y][p->x] = ' ';
		map[p->y + 1][p->x] = 'P';
		p->y += 1;
	}
}

int key_down_x(s_coord *p, char **map)
{
	if ((map[p->y + 1][p->x] == 'X') && (map[p->y + 2][p->x] != 'X')
	    && (map[p->y + 2][p->x] != '#')) {
		if (map[p->y + 2][p->x] == 'O') {
			map[p->y + 2][p->x] = 'X';
			map[p->y][p->x] = ' ';
			map[p->y + 1][p->x] = 'P';
			p->y += 1;
			return (0);
		}
		else if (map[p->y + 2][p->x] == ' ') {
			map[p->y + 2][p->x] = 'X';
			map[p->y + 1][p->x] = 'P';
			map[p->y][p->x] = ' ';
			p->y += 1;
			return (0);
	 	}
	}
}
