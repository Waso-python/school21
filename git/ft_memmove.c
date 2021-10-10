/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarr <sdarr@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:59:22 by sdarr             #+#    #+#             */
/*   Updated: 2021/10/09 13:59:23 by sdarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)destination;
	src = (unsigned char *)source;
	i = 0;
	if (!destination && !source)
		return (destination);
	if (source < destination)
	{
		while (n--)
		{
			dst[n] = src[n];
		}
	}
	else
	{
		while (n--)
		{
			*dst++ = *src++;
		}
	}
	return (destination);
}
