/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-vr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:09:31 by marde-vr          #+#    #+#             */
/*   Updated: 2023/11/01 13:59:44 by marde-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	//if (!s || ft_strlen(s) < start)
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 1;
	substr = malloc(sizeof(char) * len);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && substr[i] != '\0')
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}


/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char * s = ft_substr("tripouille", 0, 42000);
	printf("%d", strcmp(s, "tripouille"));
}


*/
