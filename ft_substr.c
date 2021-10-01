/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:45:38 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/29 14:37:50 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	sub_index;
	size_t	s_index;

	if (!s)
		return (NULL);
	substr = (char *)malloc(ft_strlen(s));
	if (!substr)
		return (NULL);
	sub_index = 0;
	s_index = 0;
	while (start <= len)
	{
		if (s_index >= start && sub_index < len)
		{
			substr[sub_index] = s[s_index];
			sub_index++;
		}
		s_index++;
		start++;
	}
	substr[sub_index] = '\0';
	return (substr);
}
