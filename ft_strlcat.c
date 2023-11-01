/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-vr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 02:47:56 by marde-vr          #+#    #+#             */
/*   Updated: 2023/11/01 03:01:16 by marde-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	if (!size)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	if (i > size)
		return (size + ft_strlen(src));
	j = 0;
	k = i + ft_strlen(src);
	while (src[j] && size > i + 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (k);
}

/*
#include <stdio.h>
int	main(void)
{
	char *src = (char *)"AAAAA";
	char dest[30]; ft_memset(dest, 0, 30);
	ft_strlcat(dest, src, 0);
	dest[0] = 'B';
	printf("%s", dest);
	printf("%zu", ft_strlcat(dest, src, 0));
}*/
