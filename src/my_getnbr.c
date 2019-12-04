/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** godeffroy.roue
*/

int my_getnbr(char *str, int i)
{
	int nb = 0;
	int sign = 1;
	while (str[i] != '\0') {
		if (str[i] == '-')
			sign = sign * -1;
		if (str[i] >= '0' && str[i] <= '9') {
			nb = nb * 10 + (str[i] - '0');
			if (str[i + 1] < '0' || str[i + 1] > '9')
				return (nb * sign);
		}
		i++;
	}
	return (nb * sign);
}
