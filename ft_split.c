/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:19:46 by nmarques          #+#    #+#             */
/*   Updated: 2021/10/01 14:17:39 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split_alloc(char const s, char c)
{
	int		index;
	int		counter;
	char	**split_alloc;

	index = 0;
	counter = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			counter++;
		index++;
	}
	split_alloc = (char **)malloc(sizeof(s) * (counter + 2));
	if (split_alloc == NULL)
		return (NULL);
	return (split_alloc);
}

void	ft_split_free(char *split_free, size_t size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		free(split_free[index]);
		index++;
	}
	free(split_free);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int	index;
}
