/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:45:08 by mochenna          #+#    #+#             */
/*   Updated: 2023/11/14 19:59:57 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	countword(const char *str, char cg)
{
	int	c;
	int	w;

	c = 0;
	w = 0;
	while (*str)
	{
		if (*str == cg)
			w = 0;
		else if (!w)
		{
			w = 1;
			c++;
		}
		str++;
	}
	return (c);
}

static void	freememory(char **v, int l)
{
	while (l--)
		free(v[l]);
	free(v);
}

char	*put_word(const char *s, int l)
{
	char	*r;
	int		i;

	r = (char *)malloc(sizeof(char) * (l + 1));
	if (r == NULL)
		return (NULL);
	i = 0;
	while (i < l && s[i] != '\0')
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

static int	length_word(const char *s, char c, int *j)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	*j = len;
	return (len);
}

char	**ft_split(const char *s, char c)
{
	char	**r;
	int		i;
	int		j;

	i = 0;
	r = (char **)malloc(sizeof(char *) * (countword(s, c) + 1));
	if (r == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		s += length_word(s, c, &j);
		r[i] = put_word(s - j, j);
		if (!r[i])
		{
			freememory(r, i);
			return (NULL);
		}
		i++;
	}
	r[i] = NULL;
	return (r);
}
