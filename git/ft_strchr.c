/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarr <sdarr@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:59:42 by sdarr             #+#    #+#             */
/*   Updated: 2021/10/09 13:59:43 by sdarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr( const char *string, int symbol)
{
	while (*string)
	{
		if (*string == (char) symbol)
			return ((char *)string);
		string++;
	}
	if ((char) symbol == '\0')
		return ((char *)string);
	return (NULL);
}
