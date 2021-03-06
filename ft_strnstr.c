/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:00:48 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/28 14:35:29 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i_big;
	size_t	i_little;

	i_big = 0;
	i_little = ft_strlen(little);
	while (i_big < len && big[i_big] != '\0')
	{
		if (*little == '\0')
			return ((char *)big);
		while (i_big + i_little < len && little[i_little] != '\0')
			i_big++;
		if (little[i_little] == '\0')
			return ((char *)big + i_big);
	}
	return (NULL);
}
