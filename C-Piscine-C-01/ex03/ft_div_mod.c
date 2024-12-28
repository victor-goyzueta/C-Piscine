/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 03:35:39 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/06/04 04:30:37 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int     main(void)
{
        int i;
        int j;
        int div;
        int mod;

        i = 10;
        j = 3;
        
        if (j != 0)
        {
            ft_div_mod(i, j, &div, &mod);
            printf("%d, %d\n", div, mod);
        }
        
        else
            {
                printf("Error al ser el divisor 0");
            }
        return(0);
}
*/
