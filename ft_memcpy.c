/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:01:14 by mochenna          #+#    #+#             */
/*   Updated: 2023/11/06 21:00:50 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (NULL);
	s1 = dst;
	s2 = src;
	i = 0;
	while (i < n && s1 != s2)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dst);
}
