/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 01:49:00 by mochenna          #+#    #+#             */
/*   Updated: 2023/11/05 01:56:09 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*s1;
	const unsigned char	*s2;

	s1 = dst;
	s2 = src;
	if (s1 <= s2)
		ft_memcpy(s1, s2, len);
	else
	{
		s1 += len - 1;
		s2 += len - 1;
		while (len > 0)
		{
			*s1-- = *s2--;
			len--;
		}
	}
	return (dst);
}
