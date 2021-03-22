/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fideguch <fideguch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 02:38:34 by fideguch          #+#    #+#             */
/*   Updated: 2020/07/03 10:48:32 by fideguch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int val, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = dest;
	i = 0;
	while (i < len)
	{
		*ptr = val;
		i++;
		ptr++;
	}
	return (dest);
}
