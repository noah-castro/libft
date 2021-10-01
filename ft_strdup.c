/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:39:52 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/29 12:24:09 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str_cpy;
	size_t	index;

	str_cpy = (char *)malloc(sizeof(str));
	if (str == NULL)
		return (NULL);
	index = 0;
	while (str[index] != '\0')
	{
		str_cpy[index] = str[index];
		index++;
	}
	str_cpy[index] = '\0';
	return (str_cpy);
}
