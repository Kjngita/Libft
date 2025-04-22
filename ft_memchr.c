/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:19:47 by gita              #+#    #+#             */
/*   Updated: 2025/04/22 21:20:24 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pnt;
	unsigned char	rock;
	size_t				i;
	
	pnt = (unsigned char *)s;
	rock = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (pnt[i] == c)
			return (pnt + i);
		i++;
	}
	return (NULL);
}
