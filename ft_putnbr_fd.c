/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:21:05 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/31 15:33:34 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//void    ft_putchar_fd(char c, int fd);
//int     ft_abs(int nb);

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nrecup;

	if (n < 0)
		ft_putchar_fd('-', fd);
	nrecup = ft_abs(n);
	if (nrecup >= 10)
	{
		ft_putnbr_fd(nrecup / 10, fd);
		ft_putchar_fd(nrecup % 10 + '0', fd);
	}
	else
		ft_putchar_fd(nrecup + '0', fd);
}
/*int	main()
{
	int	n = 12983;
	int	fd = 1;
	ft_putnbr_fd(n, fd);
	return (0);
}
*/
