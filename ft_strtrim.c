/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:12:33 by nmarques          #+#    #+#             */
/*   Updated: 2021/10/01 13:18:02 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	trim_start(char const *s1, char const *set);
int	trim_end(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((ft_strdup(s1)));
	start = trim_start(s1, set);
	end = 1 + trim_end(s1, set);
	if (end <= start)
		return ((ft_strdup(" ")));
	str = (char *)malloc (sizeof(*s1) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}

int	trim_start(char const *s1, char const *set)
{
	int	start;
	int	index;

	start = 0;
	index = 0;
	while (s1[index] != '\0')
	{
		if (s1[start] == set[index])
		{
			start++;
			index = 0;
			continue ;
		}
		index++;
	}
	return (start);
}

int	trim_end(char const *s1, char const *set)
{
	int	index;
	int	len;

	len = ft_strlen(s1) - 1;
	index = 0;
	while (len > 0)
	{
		while (set[index] != '\0')
		{
			if (set[index] == s1[len])
			{
				len--;
				index = 0;
				continue ;
			}
			index++;
		}
	}
	return (len);
}
