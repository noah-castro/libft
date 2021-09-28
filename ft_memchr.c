/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:03:02 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/27 14:48:53 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	cc;
	unsigned char	*str;
	size_t			index;

	cc = (unsigned char)c;
	str = (unsigned char *)b;
	index = 0;
	while (index < len)
	{
		if (*str == cc)
			return (str);
		str++;
		index++;
	}
	return (NULL);
}
