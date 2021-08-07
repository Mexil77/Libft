/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 14:55:53 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/07 23:20:47 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*loc;

	i = -1;
	j = 0;
	if (len == 0 || ft_strncmp(big, needle, len + 1) == 0)
		return ((char *)big);
	loc = (char *)big;
	while (big[++i] && i < len)
	{
		while ((needle[j]) && (needle[j] == big[i + j]) && (big[i + j]))
			j++;
		if (needle[j] == '\0' && i + j < len)
			return (loc += i);
		j = 0;
	}
	return (NULL);
}
