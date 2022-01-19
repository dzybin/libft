/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:30:39 by dzybin            #+#    #+#             */
/*   Updated: 2021/12/11 17:11:55 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <bsd/string.h>

char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strchr(const char *s, int c);
size_t  ft_strlen(const char *s);

char	*ft_strtrim(char const *s, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	
	i = 0;
	j = ft_strlen(s);
	if(!s || !set)
		return(0);
// forward compare the "set" with "s", when no more coincidence - exit the loop
	while (i < j && ft_strchr(set, s[i]))
		i++;
// backward compare the "set" with "s", when no more coincidence - exit the loop
	while (i < j && ft_strchr(set,s[j]))
		j--;
//substrate from place of i the length of j-i+1
	return (ft_substr(s, i, j -i + 1));
}
