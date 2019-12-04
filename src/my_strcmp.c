/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** godeffroy.roue
*/

int my_strcmp(char const *s1, char const *s2)
{
	int i = 0;
	int j = 0;
	int c;

	while (s1[i] != '\0' && s2[j] != '\0') {
		if (s1[i] != s2[j]) {
			c = s1[i] - s2[j];
			if (c > 0)
				return (1);
			if (c < 0)
				return (-1);
			}
		i++;
		j++;
	}
	return (0);
}
