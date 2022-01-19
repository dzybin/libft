/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzybin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:21:04 by dzybin            #+#    #+#             */
/*   Updated: 2021/12/01 12:46:06 by dzybin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i = 0;

	while (i < n - 1)
	{
		if (*src != '\0')
		{
			*dest++ = *src++;
		}
		else
		{
			break;
		}
		i++;		
	}
	*dest = '\0';
	return (i);
}
//int	main()
//{
//	char	dest[] = "bonjour";
//	const char	src[] = "hellololo";
//	ft_strlcpy(dest, src, 4);
//	printf("ft->  %s\n", dest);
//	return (0);
//}
