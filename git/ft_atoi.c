/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarr <sdarr@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:58:15 by sdarr             #+#    #+#             */
/*   Updated: 2021/10/09 13:58:16 by sdarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	out;

	sign = 1;
	i = 0;
	out = 0;
	while ((*str == 32) | ((*str > 8) && (*str <= 13)))
	{
		str++;
	}
	if (*str == '-' | *str == '+')
	{		
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		out = out * 10 + (*str - 48) * sign;
		str++;
	}
	return (out);
}
