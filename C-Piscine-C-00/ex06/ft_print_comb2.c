/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 03:14:14 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/28 07:11:02 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	print_comb(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, "\n", 1);
}

void	ft_print_comb2(void)
{
	char	di;
	char	ui;
	char	dd;
	char	ud;

	di = '0';
	while(di <= '9')
	{
		ui = '0';
		while (ui <= '9')
		{
			dd = '0';
			while (dd <= '9')
			{
				ud = '0';
				while (ud <= '9')
				{
					print_comb(di, ui, dd, ud);
					ud++;
				}
				dd++;
			}
			ui++;
		}
		di++;
	}
}

// int main()
// {
// 	ft_print_comb2();
// 	return (0);
// }
