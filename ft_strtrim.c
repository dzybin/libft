/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:30:39 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/31 16:00:41 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!s || !set)
		return (0);
	j = ft_strlen(s);
	while (i < j && ft_strchr(set, s[i]))
		i++;
	while (i < j && ft_strchr(set, s[j]))
		j--;
	return (ft_substr(s, i, j - i + 1));
}
