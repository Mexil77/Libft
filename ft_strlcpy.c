/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:14:34 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/01 18:46:54 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = -1;
	while (++i < dstsize && src[i] != '\0')
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	((unsigned char *)dst)[i] = '\0';
	return (i);
}
