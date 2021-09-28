/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:47:08 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/23 23:59:33 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_sign;
	char	c_sign;
	size_t	len;

	s_sign = (char *)s;
	c_sign = (char)c;
	len = ft_strlen(s_sign);
	if (c_sign == '\0')
		return ((char *)s_sign + len);
	while (len > 0)
	{
		if (s_sign)
			return ((char *)s_sign + len);
		len--;
	}
	return (NULL);
}
