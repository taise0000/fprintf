/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fideguch <fideguch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 18:46:40 by fideguch          #+#    #+#             */
/*   Updated: 2020/07/04 08:11:00 by fideguch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t	index;

	index = 0;
	if (len == 0)
		return (0);
	while (str1[index] == str2[index])
	{
		index++;
		if (str1[index] == '\0' || index >= len)
			return (0);
	}
	return ((unsigned char)str1[index] - (unsigned char)str2[index]);
}
