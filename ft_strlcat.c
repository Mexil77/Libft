/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:02:04 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/04 16:13:56 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	if (dstsize < i)
	{
		while (src[j] != '\0')
			j++;
		return (dstsize + j);
	}
	while (dstsize > 0 && i < dstsize - 1 && src[j] != '\0')
		dst[i++] = src[j++];
	dst[i] = '\0';
	while (src[j++] != '\0')
		i++;
	return (i);
}
