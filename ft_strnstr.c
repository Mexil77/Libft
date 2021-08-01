/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 14:55:53 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/01 20:22:37 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*loc;

	i = 0;
	j = 0;
	loc = (char *)big;
	while (big[i] != '\0')
	{
		while ((j < len) && (needle[j] == big[i + j]) && (big[i + j] != '\0'))
			j++;
		if ((needle[j] == '\0') || (j == len))
			return (loc += i);
		j = 0;
		i++;
	}
	return (NULL);
}
