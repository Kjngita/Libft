/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:56:42 by gita              #+#    #+#             */
/*   Updated: 2025/04/14 19:38:06 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	p;
	int	sign;
	int	num;

	p = 0;
	sign = 1;
	num = 0;
	while (str[p] == 32 || (str[p] >= 9 && str[p] <= 13))
		p++;
	if (str[p] == '+' || str[p] == '-')
	{
		if (str[p] == '-')
			sign = -sign;
		p++;
	}
	while (str[p] >= 48 && str[p] <= 57)
	{
		num = (num * 10 + str[p]) - '0';
		p++;
	}
	return (num * sign);
}
