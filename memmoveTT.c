/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmoveTT.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:24:56 by dzybin            #+#    #+#             */
/*   Updated: 2021/11/30 09:25:48 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int main(void)
{
	char c_array2[11] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	//char c_array1[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	printf("avant -> %s\n", c_array2);
	//ft_memmove((void *)&c_array1[5], (void *)&c_array1[3],5);
	//printf("ft -> %s\n", c_array1[11]);
	memmove((void *)&c_array2[5], (void *)&c_array2[3],5);
	printf("origin -> %s\n", c_array2);
	return (0);
}
