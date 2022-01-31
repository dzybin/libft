/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:04:45 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/31 16:10:32 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
//#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j])
		{
			if (i + j >= len)
				break ;
			if (!little[j + 1])
				return (&((char *)big)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
