/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:37:48 by gita              #+#    #+#             */
/*   Updated: 2025/04/23 15:35:01 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	const unsigned char *one;
	const unsigned char *two;

	one = (const unsigned char *)s1;
	two = (const unsigned char *)s2;
	i = 0;
	while ((one[i] && i < n) || (two[i] && i < n))
	{
		if (one[i] != two[i])
			return ((one[i] - two[i]));
		i++;
	}
	return (0);
}
