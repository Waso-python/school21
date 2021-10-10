/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarr <sdarr@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:58:24 by sdarr             #+#    #+#             */
/*   Updated: 2021/10/09 13:58:25 by sdarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero( void *dest, size_t count )
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char *)dest;
	while (i < count)
	{
		*(tmp + i) = '\0';
		i++;
	}
}
