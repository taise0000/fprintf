/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fideguch <fideguch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 04:32:24 by fideguch          #+#    #+#             */
/*   Updated: 2020/07/06 00:48:13 by fideguch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t n, size_t size);

int			check_char(char c, char n)
{
	return (c == n ? 1 : 0);
}

long long	get_len(char *str, char c)
{
	long long	cnt;

	cnt = 0;
	while (*str)
	{
		if (!check_char(*str, c))
			++cnt;
		++str;
	}
	return (cnt);
}

void		ft_strcpy(char *dst, char *from, char *until)
{
	while (from < until)
		*(dst++) = *(from++);
	*dst = '\0';
}

char		**ft_split(char const *s, char c)
{
	char		**r;
	long long	i;
	char		*str;
	char		*from;
	if (!s)
		return (NULL);
	str = (char *)s;
	if (!(r = (char**)ft_calloc(get_len(str, c), sizeof(char*))))
		return (0);
	i = 0;
	while (*str)
	{
		if (!check_char(*str, c))
		{
			from = str;
			while (*str && !check_char(*str, c))
				++str;
			if (!(r[i] = (char*)ft_calloc(str - from + 1, sizeof(char*))))
				return (0);
			ft_strcpy(r[i++], from, str);
		}
		++str;
	}
	return (r);
}

int		main(void)
{
	char str[] = "d";
	char charset = 'd';
	char **c;
	int  i;

	c = ft_split(str, charset);
	printf("result :"); //debug2
	for (i = 0; c[i]; i++)
		printf("[%s], ", c[i]);
	return 0;
}
