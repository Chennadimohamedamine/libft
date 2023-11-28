/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:16:36 by mochenna          #+#    #+#             */
/*   Updated: 2023/11/06 20:54:50 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	if (count < 0 || size < 0)
		return (NULL);
	memory = malloc(count * size);
	if (memory != NULL)
		ft_memset(memory, 0, count * size);
	return (memory);
}
