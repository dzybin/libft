/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:27:34 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/31 15:27:38 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

static int	ft_word_count(char const *s, char c)
{
	int	word_count;
	int	i;

	word_count = 0;
	i = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			word_count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (word_count);
}

static char	*w_create(char const *s, char c)
{
	int		i;
	char	*cpy;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	cpy = malloc((i + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	cpy[i] = '\0';
	while (--i >= 0)
		cpy[i] = s[i];
	return (cpy);
}

char	**ft_split(char const *s, char c)
{
	char	**ptab;
	int		i;
	int		ptab_count;
	int		ptab_len;

	i = 0;
	ptab_count = 0;
	ptab_len = ft_word_count(s, c);
	ptab = malloc((ptab_len + 1) * sizeof(char *));
	if (!ptab)
		return (NULL);
	while (ptab_count < ptab_len)
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			ptab[ptab_count] = w_create(&s[i], c);
			ptab_count++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	ptab[ptab_count] = NULL;
	return (ptab);
}

/*int	main ()
{
	char const	s[] = "je ne veux";
	char 	c = ' ';
	int 	i  = 0;
	char	**str;

	str = ft_split(s, c);
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	return (0);
}
*/
