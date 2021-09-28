/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 16:01:08 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/27 14:12:01 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, int len)
{
	int				index;
	int				nuller;
	unsigned char	*p;

	p = b;
	nuller = '\0';
	index = 0;
	while (index < len)
	{
		p[index] = nuller;
		index++;
	}
}
