/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fideguch <fideguch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 04:55:04 by fideguch          #+#    #+#             */
/*   Updated: 2020/07/04 11:03:23 by fideguch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*dest;

	if (!s)
		return (NULL);
	if (len == 0)
		return (NULL);
	if (len < start)
		return ("");
	i = 0;
	if (!(dest = (char *)ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < len)
		dest[i] = s[start + i];
	dest[++i] = '\0';
	return (dest);
}
