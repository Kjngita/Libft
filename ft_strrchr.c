/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:55:32 by gita              #+#    #+#             */
/*   Updated: 2025/04/24 16:32:33 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*sky;
	int		i;

	sky = (char *)s;
	i = ft_strlen(sky);
	while (i >= 0)
	{
		if (sky[i] == (unsigned char)c || c == 0)
			return (sky + i);
		i--;
	}
	return (NULL);
}
