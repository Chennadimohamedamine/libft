/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:44:38 by mochenna          #+#    #+#             */
/*   Updated: 2023/11/14 16:02:23 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	find(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	int		start;
	int		end;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && find(s1[start], set))
		start++;
	end = start;
	while (s1[end])
		end++;
	while (end > start && find(s1[end - 1], set))
		end--;
	r = (char *)malloc(end - start + 1);
	if (r == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		r[i++] = s1[start++];
	}
	r[i] = '\0';
	return (r);
}
