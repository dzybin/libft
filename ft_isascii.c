/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:19:27 by dzybin            #+#    #+#             */
/*   Updated: 2021/11/25 16:19:32 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
//int main()
//{
//	int 	c;
//
//	c = '?';
//		printf("ft_isascii %d\n", ft_isascii(c));
//	printf("original %d\n", isascii(c));
//	return (0);
//}


