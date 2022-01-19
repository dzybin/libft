/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:35:50 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/12 15:17:28 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i = 0;

	if (s == NULL || f == NULL)
		return;
	if (s)
	{	
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
