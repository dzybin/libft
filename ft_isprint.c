/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:35:20 by dzybin            #+#    #+#             */
/*   Updated: 2021/11/25 15:26:45 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int isprint(int c);
int ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
int main()
{
	int	c;

	c = 9;
	printf("ft_isprint %d\n", ft_isprint(c));
	printf("original %d\n", isprint(c));
	return (0);
}

