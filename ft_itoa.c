/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:22:55 by mochenna          #+#    #+#             */
/*   Updated: 2023/11/09 12:20:07 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	coutnumber(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		len;
	int		c;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	c = 0;
	if (n < 0)
	{
		c = 1;
		n *= -1;
	}
	len = coutnumber(n) + c;
	r = (char *)malloc(len + 1);
	if (r == NULL)
		return (NULL);
	r[len] = 0;
	while (len > 0)
	{
		r[len-- - 1] = (n % 10) + '0';
		n = n / 10;
	}
	if (c == 1)
		r[0] = '-';
	return (r);
}
