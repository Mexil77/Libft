/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:31:10 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/02 20:37:49 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*strnum;
	size_t	i;

	i = -1;
	strnum = ft_itoa(n);
	while (strnum[++i] != '\0')
		write(fd, &strnum[i], 1);
}
