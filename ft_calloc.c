/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:47:43 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/01 20:34:18 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	**final;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	final = (void **)malloc(count * sizeof(void *));
	while (i < count)
	{
		final[i] = malloc(size);
		i++;
	}
	i = 0;
	while (i < count)
	{
		while (j < size)
		{
			((unsigned char **)final)[i][j] = '\0';
			j++;
		}
		j = 0;
		i++;
	}
	return (final);
}
