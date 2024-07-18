/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:53:04 by sngantch          #+#    #+#             */
/*   Updated: 2024/07/16 18:21:37 by sngantch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (--i >= 0)
		write(1, &str[i], 1);
	return (str);
}

int	main(void)
{
	ft_rev("AMBULANCE");
}
