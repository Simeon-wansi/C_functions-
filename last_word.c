/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:08:32 by sngantch          #+#    #+#             */
/*   Updated: 2024/07/18 15:18:15 by sngantch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int	length;
	int	i;

	length = 0;
	while (str[length] != '\0')
		length++;
	i = length - 1;
	while (i >= 0 && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i--;
	while (i >= 0 && !(str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i--;
	i++;
	while (str[i] != '\0' && !(str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		last_word(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
