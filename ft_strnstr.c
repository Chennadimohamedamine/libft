/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:07:52 by mochenna          #+#    #+#             */
/*   Updated: 2023/11/13 22:50:15 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (*s1 != *s2)
			return (1);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		k;
	size_t	l;

	k = ft_strlen(haystack);
	l = ft_strlen(needle);
	if (l == 0)
		return ((char *)haystack);
	if (len < l || len < 0)
		return (0);
	i = 0;
	while (haystack[i] && i + l <= len)
	{
		if (haystack[i] == needle[0])
		{
			if (cmp((haystack + i), needle, ft_strlen(needle)) == 0)
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (0);
}
