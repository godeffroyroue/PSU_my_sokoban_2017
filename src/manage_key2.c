/*
** EPITECH PROJECT, 2017
** play_game
** File description:
** Godeffroy
*/

#include "my.h"

int key_right_x(s_coord *p, char **map)
{
	if ((map[p->y][p->x + 1] == 'X') && (map[p->y][p->x + 2] != 'X')
	    && (map[p->y][p->x + 2] != '#')) {
		if (map[p->y][p->x + 2] == 'O') {
			map[p->y][p->x + 2] = 'X';
			map[p->y][p->x] = ' ';
			map[p->y][p->x + 1] = 'P';
			p->x += 1;
			return (0);
		}
		else if (map[p->y][p->x + 2] == ' ') {
			map[p->y][p->x + 2] = 'X';
			map[p->y][p->x + 1] = 'P';
			map[p->y][p->x] = ' ';
			p->x += 1;
			return (0);
	 	}
	}
}

void key_right(s_coord *p, char **map)
{
	if ((key_right_x(p, map)) == 0)
		return;
	else if (map[p->y][p->x + 1] == 'O') {
		map[p->y][p->x + 1] = 'P';
		map[p->y][p->x] = ' ';
		p->x += 1;
	}
	else if (map[p->y][p->x + 1] == ' ') {
		map[p->y][p->x] = ' ';
		map[p->y][p->x + 1] = 'P';
		p->x += 1;
	}
}

void key_left(s_coord *p, char **map)
{
	if ((key_left_x(p, map)) == 0)
		return;
	else if (map[p->y][p->x - 1] == 'O') {
		map[p->y][p->x - 1] = 'P';
		map[p->y][p->x] = ' ';
		p->x -= 1;
	}
	else if (map[p->y][p->x - 1] == ' ') {
		map[p->y][p->x] = ' ';
		map[p->y][p->x - 1] = 'P';
		p->x -= 1;
	}
}

int key_left_x(s_coord *p, char **map)
{
	if ((map[p->y][p->x - 1] == 'X') && (map[p->y][p->x - 2] != 'X')
	    && (map[p->y][p->x - 2] != '#')) {
		if (map[p->y][p->x - 2] == 'O') {
			map[p->y][p->x - 2] = 'X';
			map[p->y][p->x] = ' ';
			map[p->y][p->x - 1] = 'P';
			p->x -= 1;
			return (0);
		}
		else if (map[p->y][p->x - 2] == ' ') {
			map[p->y][p->x - 2] = 'X';
			map[p->y][p->x - 1] = 'P';
			map[p->y][p->x] = ' ';
			p->x -= 1;
			return (0);
	 	}
	}
}
