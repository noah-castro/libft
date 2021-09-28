/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 14:06:51 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/23 15:45:39 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	index;
	char	*p_src;
	char	*p_dst;

	p_src = (char *)src;
	p_dst = (char *)dst;
	index = 0;
	if (p_src == NULL && p_dst == NULL)
		return (0);
	while (index < len)
	{
		p_dst[index] = p_src[index];
		index++;
	}
	return (dst);
}
