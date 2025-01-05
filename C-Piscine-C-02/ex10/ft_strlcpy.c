/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 22:04:29 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/05 22:56:55 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int  src_len;
    unsigned int  copy_len;

    src_len = ft_strlen(src);
    if (size > 0)
    {
        if (src_len >= size)
        {
            copy_len = size - 1;
        }
        else
        {
            copy_len = src_len;
        }
		dest[copy_len] = '\0';
		while (copy_len--)
		{
			dest[copy_len] = src[copy_len];
		}
    }
    return (src_len);
}
