/*
** EPITECH PROJECT, 2017
** flagsss
** File description:
** godeffroy.roue
*/

#include "my.h"

int *count_lign(char *av)
{
	FILE *fp;
	int *tab = malloc(sizeof(int) * 2);
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	int col = 0;
	int lign = 0;

	fp = fopen(av, "r");
	while ((read = getline(&line, &len, fp)) != -1) {
		col = read;
		lign++;
	}
	tab[0] = col;
	tab[1] = lign;
	fclose (fp);
	return (tab);
}

char *print_tab(char **tab_c, char *av, int *tab)
{
	int fd;
	int rd;
	int i = 0;
	int size = tab[0] * tab[1];
	char *buffer = malloc(sizeof(char) * (tab[0] * tab[1] + 1));

	fd = open(av, O_RDONLY);
	rd = read(fd, buffer, size);
	buffer[rd] = '\0';
	return (buffer);
}

char **create_char_tab(int *tab)
{
	char **tab_char = malloc(sizeof(char*) * tab[1]);

	for (int i = 0; i != tab[1]; i++) {
		tab_char[i] = malloc(sizeof(char) * tab[0]);
	}
	return (tab_char);
}

char **transform_buff(char *buffer, char **tab_char, int *tab)
{
	int a = 0;
	int b = 0;

	for (int i = 0; buffer[i] != '\0'; i++) {
		if (buffer[i] != '#' && buffer[i] != ' ' && buffer[i] != 'P'
		    && buffer[i] != 'X' && buffer[i] != 'O'
		    && buffer[i] != '\n')
			exit (84);
		if (buffer[i] == '\n') {
			tab_char[a][b] = '\0';
			a++;
			b = 0;
		}
		else if (buffer[i] != '\n' && buffer[i] != '\0') {
			tab_char[a][b] = buffer[i];
			b++;
		}
	}
	return (tab_char);
}

char **my_sokoban_alg(int ac, char *av)
{
	int *tab = count_lign(av);
	char **tab_char = create_char_tab(tab);
	char *buffer = print_tab(tab_char, av, tab);

	tab_char = transform_buff(buffer, tab_char, tab);
	return (tab_char);
}
