/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-vr <marde-vr@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:43:20 by marde-vr          #+#    #+#             */
/*   Updated: 2023/10/31 00:01:27 by marde-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;

	if (size == 0)
		return (ft_strlen(dest) + ft_strlen(src));
	i = 0;
	dest_len = ft_strlen(src);
	while (src[i] && i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(dest) + ft_strlen(src));
}*/


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

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

