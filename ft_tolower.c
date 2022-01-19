/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:14:29 by dzybin            #+#    #+#             */
/*   Updated: 2021/12/02 16:52:14 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
if (c >= 'A' && c<= 'Z')
{
	c = c + 32;
	return (c);
}
else
return (c);
}

int	main()
{
	char	c = '8';
		printf("ft_to %c\n", ft_tolower(c));
	return (0);
}
