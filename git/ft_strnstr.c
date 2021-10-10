/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarr <sdarr@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:11:50 by sdarr             #+#    #+#             */
/*   Updated: 2021/10/09 14:00:31 by sdarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)(unsigned char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		if (*(haystack + i) == *(needle))
		{
			j = 0;
			while ((*(needle + j) == *(haystack + i + j)) && (i + j < len)
				&& (*(needle + j) != '\0') && (*(haystack + i + j) != '\0'))
			{
				if (*(needle + j + 1) == '\0')
					return ((char *)((unsigned char *)(haystack + i)));
				j++;
			}			
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	printf("%s\n",ft_strnstr("lorem ipsum dolor sit amet", "", 10));
// 	printf("%s\n",strnstr("lorem ipsum dolor sit amet", "", 10));
// }