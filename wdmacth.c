/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmacth.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:05:01 by sngantch          #+#    #+#             */
/*   Updated: 2024/07/18 15:07:31 by sngantch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    wdmacth(char *str1, char *str2)
{
    int i;
    int j;
    int count;
    int length;

    i = 0;
    length = 0;
    while(str1[length])
        length++;
    count = 0;
    i = 0;
    while (str1[i] != '\0')
    {
        j = 0;
        while(str2[j] != '\0')
        {
            if (str1[i] == str2[j])
            {
                count++;
                break ;
            }
            j++;
        }
        i++;
    }
    
    if (count == length)
    {
        i = 0;
        while(str1[i])
        {
            write(1, &str1[i], 1);
            i++;
        }
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        wdmacth(av[1], av[2]);
    }
    write(1, "\n", 1);
    return (0);
}