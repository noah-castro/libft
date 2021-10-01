/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:40:20 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/29 15:09:41 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		index;
	int		len;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	index = 0;
	len = 0;
	if (!str)
		return (NULL);
	while (index < ft_strlen(s1))
	{
		str[len++] = s1[index];
		index++;
	}
	index = 0;
	while (index < ft_strlen(s2))
	{
		str[len++] = s2[index];
		index++;
	}
	str[len] = '\0';
	return (str);
}
