/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-vr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:07:24 by marde-vr          #+#    #+#             */
/*   Updated: 2023/10/30 16:04:35 by marde-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//// 
///
///
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;
	char	*array;

	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	printf("%s\n%s\n", ptr_dest, ptr_src);
	while (i < n)
	{
		ptr_src[i] = array[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		printf("%c", array[i]);
		ptr_dest[i] = array[i];
		i++;
	}
	return (ptr_dest);
}

int	main(void)
{
	char dest[]= "hello";
	char src[]= "world";
	ft_memmove(dest, src, 4);
	printf("%s", dest);
}
