/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:57:51 by sngantch          #+#    #+#             */
/*   Updated: 2024/07/18 12:53:10 by sngantch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_double1(char ca, char *str, int pos)
{
	int	i;
	
	i = 0;
	while (str[i] && (pos == -1 || i < pos))
	{
		if (str[i] == ca)
			return (1);
		i++;
	}
	return (0);
}


void	unionstr(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i])
	{
		if(!is_double1(str1[i], str1, i))
			write(1, &str1[i], 1);
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (!is_double1(str2[i], str1, -1) && !is_double1(str2[i], str2, i))
			write(1, &str2[i], 1);
		i++;
	}

}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		unionstr(av[1], av[2]);
	}
	write(1, "\n", 1);
	return (0);
}