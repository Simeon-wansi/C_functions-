/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:11:12 by sngantch          #+#    #+#             */
/*   Updated: 2024/07/18 16:42:20 by sngantch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    result = 0;
    sign = 1;
    i  = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <=13))
        i++;
    while (str[i] == '-' ||  str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return(result * sign);                
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("%d\n", ft_atoi(av[1]));
    }
    return (0);
}