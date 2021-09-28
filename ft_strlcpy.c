/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:18:12 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/27 14:15:34 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;

	index = ft_strlen(src);
	if (dstsize > 0)
	{
		while (index < dstsize - 1 && *src != '\0')
		{
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return (index);
}
