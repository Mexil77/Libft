/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:05:23 by emgarcia          #+#    #+#             */
/*   Updated: 2021/08/07 23:30:36 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	number;
	int		signo;

	i = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	signo = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo *= (-1);
		i++;
	}
	number = 0;
	i--;
	while (str[++i] >= '0' && str[i] <= '9')
		number = 10 * number + str[i] - '0';
	number *= (long)signo;
	return (number);
}
