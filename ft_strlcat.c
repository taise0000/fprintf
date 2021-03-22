/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fideguch <fideguch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 06:02:04 by fideguch          #+#    #+#             */
/*   Updated: 2020/07/04 07:30:58 by fideguch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	char	*s;
	size_t	s_l;
	size_t	d_l;

	s_l = ft_strlen(src);
	d_l = ft_strlen(dest);
	if (*src == '\0')
		return ((int)n);
	if (n == 0)
		return ((int)s_l);
	s = (char *)src;
	while (*dest)
		dest++;
	i = 0;
	while ((int)i < (int)n - (int)d_l - 1 && s[i])
		*(dest++) = s[i++];
	*dest = '\0';
	if (n <= d_l)
		return ((int)s_l + (int)n);
	return ((int)d_l + (int)s_l);
}
