/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarr <sdarr@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:00:36 by sdarr             #+#    #+#             */
/*   Updated: 2021/10/09 14:00:37 by sdarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr( const char *string, int symbol)
{
	long int	i;

	i = 0;
	while (string[i] != 0)
	{
		i++;
	}	
	while (i >= 0)
	{
		if ((char)string[i] == (char) symbol)
			return ((char *) string + i);
		if (symbol == 0)
			return ((char *) string + i);
		i--;
	}
	return (NULL);
}
