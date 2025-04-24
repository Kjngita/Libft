/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:58:31 by gita              #+#    #+#             */
/*   Updated: 2025/04/24 16:31:20 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*cat;
	unsigned int	i;

	cat = (char *)s;
	i = 0;
	while (cat[i] || c == '\0')
	{
		if (cat[i] == (unsigned char)c)
			return (cat + i);
		i++;
	}
	return (NULL);
}
