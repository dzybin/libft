/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:04:02 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/17 16:05:22 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** SYNOPSIS: memory allocation
**
** DESCRIPTION:
** 		The calloc() function contiguously allocates enough space for count
**	objects that are size bytes of memory each and returns a pointer to the
**	allocated memory. The allocated memory is filled with bytes of value
**	zero.
*/

#include "libft.h"

void	*ft_calloc(size_t count,size_t size)
{
	void	*dest;

	dest = malloc(count * size);
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, count * size);
	return (dest);
}
/*
int	main()
{
	const char	c[] = "ljh";
	int	i = 0;
	size_t	count;
	size_t	n = 2;

	count = ft_strlen(c);
	ft_calloc(count, n);
	return (0);
}
*/

