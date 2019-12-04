/*
** EPITECH PROJECT, 2017
** include
** File description:
** godeffroy.roue
*/

#ifndef MY_H
#define MY_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <fcntl.h>
#include <ncurses.h>

typedef struct s_coord
{
	int x;
	int y;
} s_coord;

int my_sokoban(int ac, char **av);
char **my_sokoban_alg(int ac, char *av);
int map_list(int ac, char **av);
int main_help(int ac, char **av);
char **choose_map(int ac, char *av);
int *count_lign(char *av);
char **create_char_tab(int *tab);
char *print_tab(char **tab_c, char *av, int *tab);
int play_game(char **map, int *count, s_coord *player, int *find_o);
int v_exit(void);
void move_player(s_coord *p, char **map, int key);
int *find_o(char **map, int *count);
void verif_o(int *find_o, char **map, int *count);
int count_o(int *find_o);
void print_map(int row, int col, char **map);
int verif_win(int *find_o, char **map);
int cond_find(char **map, int j, int i);
int change_tab(int *tab, int c, int i, int j);
s_coord *verif_posp(char **map, s_coord *player, int i, int j);

void key_up(s_coord *p, char **map);
int key_up_x(s_coord *p, char **map);

int key_down_x(s_coord *p, char **map);
void key_down(s_coord *p, char **map);

int key_right_x(s_coord *p, char **map);
void key_right(s_coord *p, char **map);

int key_left_x(s_coord *p, char **map);
void key_left(s_coord *p, char **map);

int my_put_nbr(long int nb, int base);
int my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char *str);
int my_put_hexa(long int nb, int diff_ascii);
void print_int(char *first, int i, va_list args);
void print_hexa(char *first, int i, va_list args);
void print_octa(char *first, int i, va_list args);
void print_char(char *first, int i, va_list args);
int my_printf(char *first, ...);
void print_hexa(char *first, int i, va_list args);
void print_unsigned_int(char *format, int i, va_list args);
int my_put_nbr_ui(unsigned int nb);
void print_pointer(char *format, int i, va_list args);
void print_binary(char *format, int i , va_list args);
void print_mods(char *str);
void my_cprints(char *str, int i);
void my_flags(char *format, int i, va_list args);
int my_getnbr(char *str, int i);
void space_back(char *format, int i);
int my_strcmp(char const *s1, char const *s2);

#endif
