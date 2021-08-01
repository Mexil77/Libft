/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:05:55 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/01 20:33:59 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*n;
	size_t	i;

	i = 0;
	n = (char *)malloc(sizeof(char) * ft_strlen(s1));
	if (n != NULL)
	{	
		while (i < ft_strlen(s1))
		{
			n[i] = s1[i];
			i++;
		}
	}
	return (n);
}
