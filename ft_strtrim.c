/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:30:54 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/03 18:55:20 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_findchr(const char *str, char	c)
{
	size_t	i;

	i = -1;
	while (str[i] != '\0')
		if (str[i] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	rem;
	size_t	i;
	size_t	j;
	char	*final;

	i = -1;
	j = -1;
	rem = 0;
	len = ft_strlen(s1);
	while (set[++i] != '\0')
	{
		while (s1[++j] != '\0')
			if (set[i] == s1[j])
				rem++;
		j = -1;
	}
	i = -1;
	final = (char *)malloc(sizeof(char) * (len - rem + 1));
	while (s1[++i] != '\0')
		if (ft_findchr(set, s1[i] == 0))
			final[++j] = s1[i];
	final[i] = '\0';
	return (final);
}
