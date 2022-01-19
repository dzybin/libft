/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:30:32 by dzybin            #+#    #+#             */
/*   Updated: 2021/11/29 14:37:57 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
int	i;
unsigned char	*d;
unsigned char	*s;

i = 0;
d = (unsigned char *)dst;
s = (unsigned char *)src;
printf("\ns     : %p", s);
printf("\ns src : %p", src);
if (s < d)
{
	i = len - 1;
	while (i >= 0)
	{
		d[i] = s[i];
		i--;
		//	((char *)dst)[i] = ((char *)src)[i];
		//	i++;
	}
}
else if (s > d)
{
	i = 0;
	while (i != (int)len)
	{
		//((char *)dst)[i] = ((char *)src)[i];
		d[i] = s[i];
		i++;
	}
}
return (dst);
}
int main(void)
{
	//char c_array2[11] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char c_array1[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	//printf("\navant -> %s\n", c_array2);
	ft_memmove((void *)&c_array1[5], (void *)&c_array1[3],5);
	printf("\nft -> %s\n", c_array1);
	//memmove((void *)&c_array2[5], (void *)&c_array2[3],5);
	//printf("origin -> %s\n", c_array2);
	return (0);
}
////{
//	int	i;
//
//	if (!dst || !src)
//		return (NULL);
//	if (dst > src)
//	{
//		i = (int)len - 1;
//		while (i >= 0)
//		{
//			*(char*)(dst + i) = *(char*)(src + i);
//			i--;
//		}
//	}
//	else
//	{
//		i = 0;
//		while (i < (int)len)
//		{
//              void * b = *(char*)(dst + i-1);
//          void * c = *(char*)(src + i-1);
//			*(char*)(dst + i) = *(char*)(src + i);
//          
//			i++;
//		}
//	}
//	return (dst);
//}
//
//int	main()
//{
//	unsigned char dest[] = "bonj";
//	unsigned char src[] = "hello worker";
//	unsigned char d2[] = "bonj";
//	unsigned char s2[] = "hello worker";

	//printf("dest %lu \n", *dest);
	//printf("src %lu \n", *src);

//	ft_memmove(dest, src, 45);
//	printf("ft -> %s\n", dest);
//	memmove(d2, s2, 45);
//	printf("orig -> %s\n", d2);
//	return (0);
//}
