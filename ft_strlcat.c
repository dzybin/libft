/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:47:39 by dzybin            #+#    #+#             */
/*   Updated: 2022/01/31 15:42:48 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dst_len;
	i = 0;
	if (size > dst_len)
	{
		while (dst_len + i < size - 1 && src[i])
			dst[j++] = src[i++];
		dst[j] = '\0';
		return (dst_len + src_len);
	}
	else
		return (src_len + size);
}
/*
int	main()
{
	char	dst1[] = "bonjour";
	const char	src1[] = "hellololo";
	size_t	str1;
	size_t	str2;

	str1 = ft_strlcat(dst1, src1, 10);

	printf("ft -> %ld \n %s\n", str1, dst1);

	char	dst2[] = "bonjour";
	const char	src2[] = "hellololo";
	str2 = strlcat(dst2, src2, 10);
	printf("or -> %ld \n %s\n", str2, dst2);
	return(0);
}
*/
