/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 01:40:17 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/06/04 04:34:31 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int     main(void)
{
        int x;
	int y;

	x = 42;
        y = 24;

        printf("%d, %d\n", x, y);
        ft_swap(&x, &y);
        printf("%d, %d\n", x, y);
        return (0);
}
*/
