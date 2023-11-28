/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:01:14 by mochenna          #+#    #+#             */
/*   Updated: 2023/11/07 21:01:26 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		else if ((unsigned char)*s1 < (unsigned char)*s2)
			return (-1);
		else if ((unsigned char)*s1 > (unsigned char)*s2)
			return (1);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
