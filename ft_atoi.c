/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sugiurataisei <sugiurataisei@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 23:22:22 by fideguch          #+#    #+#             */
/*   Updated: 2020/07/14 18:47:17 by sugiuratais      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *n)
{
	int		i;
	int		flag;
	int		result;

	i = 0;
	flag = 0;
	result = 0;

	while ((n[i] == ' ') || (n[i] == '\t') || (n[i] == '\n') || \
	(n[i] == '\r') || (n[i] == '\v') || (n[i] == '\f'))
		i++;
	if (n[i] == '-')
		flag = 1;
	if (n[i] == '-' || n[i] == '+')
		i++;
	while (n[i] >= '0' && n[i] <= '9' && n[i])
	{
		result *= 10;
		result += (long)(n[i] - 48);
		i++;
	}
	return (flag == 1 ? -result : result);
}
