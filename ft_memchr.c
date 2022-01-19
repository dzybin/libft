/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:43:50 by dzybin            #+#    #+#             */
/*   Updated: 2021/12/06 13:02:30 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <libft.h>
#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*a1;

	i = 0;
	a1 = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while ((unsigned char)c != a1[i] && i < n - 1)
			i++;
	if ((unsigned char)c == a1[i])
				return ((void *)a1 + i);
	else
				return (NULL);   
}
