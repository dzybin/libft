/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:10:38 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/31 16:46:44 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (ss1[i] == ss2[i] && i < n - 1)
		i++;
	return (ss1[i] - ss2[i]);
}
