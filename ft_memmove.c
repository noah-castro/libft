/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:24:49 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/27 14:13:40 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long	index;
	char			*p_dst;
	char			*p_src;

	p_dst = (char *)dst;
	p_src = (char *)src;
	index = 0;
	if (!p_dst && !p_src)
		return (NULL);
	if (p_dst > p_src)
		while (len--)
			p_dst[len] = p_src[len];
	else
	{
		while (index < len)
		{
			p_dst[index] = p_src[index];
			index++;
		}
	}
	return (dst);
}
