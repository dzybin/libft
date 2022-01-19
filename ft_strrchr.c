/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:50:48 by dzybin            #+#    #+#             */
/*   Updated: 2021/12/05 19:28:15 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>
int	ft_strlen(const char *s)
{
	int	i;

	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return (&((char*)s)[len]);
	len--;
	}
	return (NULL);
}
int main()
{
	const char	s[50] = "ffbrifadfo";
	const char	s2[50] = "ffobrifadfo";
	printf("ft %s \n ", ft_strrchr(s, 'f'));
	printf("or %s \n ", strrchr(s2, 'f'));
	return (0);
}
