/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:08:46 by nmarques          #+#    #+#             */
/*   Updated: 2021/08/26 18:08:46 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	index;
	unsigned char	*p;

	index = 0;
	p = b;
	while (index < len)
	{
		p[index] = (unsigned char)c;
		index++;
	}
	return (b);
}
