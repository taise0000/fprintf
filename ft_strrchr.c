/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fideguch <fideguch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 15:58:18 by fideguch          #+#    #+#             */
/*   Updated: 2020/07/03 10:49:36 by fideguch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		s_len;
	char	*result;
	char	*return_r;

	i = 0;
	return_r = (char *)s;
	result = return_r;
	s_len = (int)ft_strlen(return_r);
	while (i < s_len)
	{
		if (*return_r == c)
			result = return_r;
		return_r++;
		i++;
	}
	if (*return_r == '\0' && c == 0)
		return (return_r);
	if (*result == c)
		return (result);
	return (0);
}
