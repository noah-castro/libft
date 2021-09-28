/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:42:28 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/27 14:50:36 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*sb1;
	unsigned char	*sb2;
	size_t			index;

	sb1 = (unsigned char *)b1;
	sb2 = (unsigned char *)b2;
	index = 0;
	while (len--)
	{
		if (sb1[index] != sb2[index])
			return ((int)(sb1 - sb2));
		index++;
	}
	return (0);
}
