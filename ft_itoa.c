/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:37:43 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/31 15:35:41 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int	ft_sign_allocation(int number)
{
	if (number < 0)
		return (-number);
	else
		return (number);
}

static int	len_needed(int n)
{
	unsigned int	len;
	unsigned int	nabs;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	nabs = ft_sign_allocation(n);
	while (nabs > 0)
	{
		len++;
		nabs /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	unsigned int	nabs;

	len = len_needed(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	nabs = ft_sign_allocation(n);
	if (nabs == 0)
		str[0] = '0';
	while (--len > 0)
	{
		str[len] = (nabs % 10) + '0';
		nabs /= 10;
	}
	if (n > 0)
		str[0] = (nabs % 10) + '0';
	return (str);
}
