/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:58:12 by nmarques          #+#    #+#             */
/*   Updated: 2021/08/24 19:58:12 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

int				ft_toupper(int c);

int				ft_tolower(int c);

int				ft_strlen(const char *s);

void			*ft_memset(void *b, int c, size_t len);

void			ft_bzero(void *b, int len);

void			*ft_memcpy(void *dst, const void *src, size_t len);

void			*ft_memmove(void *dst, const void *src, size_t len);

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);

char			*ft_strchr(const char *s, int c);

char			*ft_strrchr(const char *s, int c);

int				ft_strncmp(const char *s1, const char *s2, size_t len);

void			*ft_memchr(const void *b, int c, size_t len);

int				ft_memcmp(const void *b1, const void *b2, size_t len);

#endif
