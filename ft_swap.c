/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:46:07 by sngantch          #+#    #+#             */
/*   Updated: 2024/07/16 13:52:38 by sngantch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	*c;

	*c = *a;
	*a = *b;
	*b = *c;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 2;
// 	b = 4;
// 	printf(" Avant le swap a : %d , b: %d \n", a, b);
// 	ft_swap(&a, &b);
// 	printf(" Apres le swap a : %d , b: %d \n", a, b);
// }
