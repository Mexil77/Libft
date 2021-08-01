/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:02:04 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/01 18:57:32 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = -1;
	while (dst[i] != '\0')
		i++;
	while (++j < dstsize && src[j] != '\0')
		((unsigned char *)dst)[i + j] = ((unsigned char *)src)[j];
	((unsigned char *)dst)[i + j] = '\0';
	return (i + j);
}
