/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:21:37 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/27 14:37:01 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	src_index;

	index = 0;
	src_index = 0;
	while (dst[index] && index < dstsize)
	{
		index++;
	}
	while (src[src_index] && ((index + src_index) < dstsize - 1))
	{
		dst[index + src_index] = src[src_index];
		src_index++;
	}
	dst[index + src_index] = '\0';
	return (index + ft_strlen(src));
}
