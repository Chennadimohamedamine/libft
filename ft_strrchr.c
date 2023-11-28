/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 01:23:53 by mochenna          #+#    #+#             */
/*   Updated: 2023/11/13 22:50:44 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	e;

	i = ft_strlen(s);
	e = 0;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			s = &s[i];
			return ((char *)s);
		}
		i--;
	}
	return (0);
}
