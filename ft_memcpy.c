/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 12:35:50 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/01 17:53:57 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp;
	char	*s_src;

	tmp = (char *)dst;
	s_src = (char *)src;
	while (n--)
	{
		*tmp++ = *s_src++;
	}
	return (dst);
}
