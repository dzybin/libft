/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:45:27 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/31 16:04:28 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = 0;
	if (!dest && !src)
		return (NULL);
	tmp1 = (unsigned char *)src;
	tmp2 = (unsigned char *)dest;
	while (n > i)
	{
		tmp2[i] = tmp1[i];
		i++;
	}
	return (dest);
}
/*int	main()
{
	unsigned char dest[] = "bonjour";
	unsigned char src[] = "hello";
	unsigned char d2[] = "bonjour";
	unsigned char s2[] = "hello";

	//printf("dest %lu \n", *dest);
	//printf("src %lu \n", *src);

	ft_memcpy(dest, src, 8);
	printf("ft -> %s\n", dest);
	memcpy(d2, s2, 8);
	printf("orig -> %s\n", d2);
	return (0);
}
*/
