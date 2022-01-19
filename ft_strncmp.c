/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:36:08 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/19 15:58:25 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (ss1[i] == ss2[i] && i < n - 1 && ss1[i])
		i++;
	return (ss1[i] - ss2[i]);
}
/*
int main()
{
	const char	s[50] = "ffobri";
	const char	s2[50] = "aaobri";
	const char	s4[50] = "aaobri";
	const char	s3[50] = "ffobri";
	char ret = ft_strncmp(s, s2, 3);
	char ret2 = strncmp(s, s2, 3);
	printf("ft %d \n ", ret);
	printf("or %d \n ", ret2);
	return (0);
}
*/
