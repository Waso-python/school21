/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarr <sdarr@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:59:31 by sdarr             #+#    #+#             */
/*   Updated: 2021/10/09 18:09:31 by sdarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <string.h>

int		ft_isalpha(int sym);
int		ft_isdigit(int sym);
int		ft_isalnum(int sym);
int		ft_isprint(int sym);
void	*ft_memset( void *dest, int ch, size_t num);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_isascii(int sym);
void	ft_bzero(void *dest, size_t count );
size_t	ft_strlen(const char *str);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
void	*ft_memmove(void *destination, const void *source, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper( int character );
int		ft_tolower( int character );
char	*ft_strchr( const char *string, int symbol);
char	*ft_strrchr( const char *string, int symbol);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif
