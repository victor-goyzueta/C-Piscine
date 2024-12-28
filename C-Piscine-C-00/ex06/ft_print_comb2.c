/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 03:14:14 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/28 03:55:33 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	d;
	char	u;

	d = '0';
	while (d <= '9')
	{
		write(1, &d, 1);
		u = '0';
		while(u <= '9')
		{
			write(1, &u, 1);
			u++;
		}
		write(1, "\n", 1);
		d++;
	}
}

int main()
{
	ft_print_comb2();
	return (0);
}