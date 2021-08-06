/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 12:20:47 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/04 14:10:34 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*find;

	i = -1;
	find = (void *)s;
	while (++i < n && ((char *)s)[i] != '\0')
		if (((char *)s)[i] == c)
			return (find += i);
	return (NULL);
}
