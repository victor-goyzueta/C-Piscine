/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:10:53 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/06/04 17:24:32 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
int	main(void)
{
	int i;
	int j;

	i = 10;
	j = 3;

	if(j != 0)
	{
		ft_ultimate_div_mod(&i, &j);
		printf("%d, %d\n", i, j);
	}
	else
	{
		printf("Error al ser el divisor 0");
	}
}
*/
