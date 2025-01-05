/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:23:02 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/05 22:18:34 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_lower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

static int	is_upper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

static int	is_space_tab(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_upper(str[i]))
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (is_lower(str[i]) && (is_space_tab(str[i - 1]) || i == 0))
			str[i] -= 32;
		i++;
	}
	return (str);
}
