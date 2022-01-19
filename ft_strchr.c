/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:17:01 by dzybin            #+#    #+#             */
/*   Updated: 2021/12/11 16:00:36 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i = 0;

	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return (&((char*)s)[i]);
	return (NULL);
}
