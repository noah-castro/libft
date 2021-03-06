/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:47:08 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/29 13:37:41 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*s_sign;

	s_sign = (char *)s;
	len = ft_strlen(s_sign);
	while (len >= 0)
	{
		if (s_sign[len] == c)
			return ((char *)s_sign + len);
		len--;
	}
	return (NULL);
}
