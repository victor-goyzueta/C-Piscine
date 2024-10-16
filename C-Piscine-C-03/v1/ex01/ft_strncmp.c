/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:26:39 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/06/13 00:15:02 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "Hola mundo";
	char	s2[] = "Hola";
	unsigned int	n;
	int	result;

	n = 3;
	result = ft_strncmp(s1, s2, n);
	ft_strncmp(s1, s2, n);
	printf ("%i", ft_strncmp(s1, s2, n));
	return (0);
}
*/
