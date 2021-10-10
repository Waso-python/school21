/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarr <sdarr@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:59:26 by sdarr             #+#    #+#             */
/*   Updated: 2021/10/09 13:59:27 by sdarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t num )
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = dest;
	while (i < num)
	{
		tmp[i] = (char)ch;
		i++;
	}
	return (tmp);
}
