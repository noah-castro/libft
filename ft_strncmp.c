/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:39:51 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/29 13:08:25 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			returner;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (len > 0)
	{
		if (*ss1 > *ss2)
		{
			returner = 1;
			return (returner);
		}
		if (*ss1 < *ss2)
		{
			returner = -1;
			return (returner);
		}
		len--;
	}
	returner = 0;
	return (returner);
}
