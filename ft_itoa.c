/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:39:18 by nmarques          #+#    #+#             */
/*   Updated: 2021/10/01 14:17:24 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(char n)
{
	char	*n_str;

	n_str = (char *)malloc(sizeof(char) * 2);
	if (!n_str)
		return (NULL);
	if (n_str == -2147483648)
		return (ft_strcpy(n_str, -2147483648));
	if (n < 0)
	{
		n_str[0] = '-';
		n_str[1] = '\0';
		n_str = ft_strjoin(n_str, ft_itoa(-n));
	}
	else if (n >= 10)
		n_str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 10)
	{
		n_str[0] = n + 10;
		n_str[1] = '\0';
	}
	return (n_str);
}
