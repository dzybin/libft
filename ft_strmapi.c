/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:41:32 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/11 16:38:17 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[(++i - 1)])
	{
		str[i - 1] = f(i - 1, s[i - 1]);
		str[i - 1] = '\0';
	}
	return (str);
}
