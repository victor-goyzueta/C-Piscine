/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:21:53 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/06/09 13:30:04 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	print_array_recursively(int *tab, int size)
{
	if (size <= 0)
	{
		write(1, "\n", 1);
		return;
	}
	printf("%d ", *tab);
	print_array_recursively(tab + 1, size - 1);
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	size;

	size = 5;
	printf("Array original: ");
	print_array_recursively(arr, size);

	ft_rev_int_tab(arr, size);

	printf("\n""Array invertido: ");
	print_array_recursively(arr, size);

	return (0);
}
*/
