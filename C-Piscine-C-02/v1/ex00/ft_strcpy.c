/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 23:54:55 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/06/07 13:32:56 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[13]; //Asegurse que haya espacio suficiente para el string
	char	*src;

	src = "Hello, World!";
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return(0);
}
*/
