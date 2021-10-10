/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarr <sdarr@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:00:25 by sdarr             #+#    #+#             */
/*   Updated: 2021/10/09 14:00:26 by sdarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		res;

	i = 0;
	res = 0;
	while (i < n)
	{
		if ((*(s1 + i)) != (*(s2 + i)))
		{
			if ((unsigned char)s1[i] - (unsigned char)s2[i] > 0)
				return (1);
			else if ((unsigned char)s1[i] - (unsigned char)s2[i] < 0)
				return (-1);
			else
				return (res);
		}
		i++;
	}	
	return (res);
}
