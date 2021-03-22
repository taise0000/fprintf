/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sugiurataisei <sugiurataisei@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 06:05:12 by fideguch          #+#    #+#             */
/*   Updated: 2020/07/09 15:24:00 by sugiuratais      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cast_char(char *r, int n, int flag)
{
	char	tmp;
	int		i;
	int		a;

	i = 0;
	while (n > 0)
	{
		r[i] = n % 10 + '0';
		i++;
		n /= 10;
	}
	if (flag == 1)
		r[i++] = '-';
	a = 0;
	while (a < i / 2)
	{
		tmp = r[a];
		r[a] = r[i - a - 1];
		r[i - a - 1] = tmp;
		a++;
	}
	return (r);
}

static int	memory_size(int n, int size)
{
	if (n < 10)
		return (1);
	if (n >= 10)
		size = memory_size(n / 10, size + 1);
	return (size + 1);
}

static char	*return_min(int n)
{
	char	*r;

	if (n == -2147483648)
	{
		if (!(r = (char *)ft_calloc(11, sizeof(char))))
			return (0);
		r = "-2147483648";
	}
	else
	{
		if (!(r = (char *)ft_calloc(2, sizeof(char))))
			return (0);
		r = "0";
	}
	return (r);
}

char		*ft_itoa(int n)
{
	int		flag;
	int		size;
	char	*result;

	if (n == -2147483648 || n == 0)
		return (return_min(n));
	flag = n < 0 ? 1 : 0;
	if (n < 0)
	{
		n *= -1;
		size = memory_size(n, 0) + 1;
	}
	else
		size = memory_size(n, 0);
	if (!(result = (char *)ft_calloc(size, sizeof(char))))
		return (0);
	return (cast_char(result, n, flag));
}
