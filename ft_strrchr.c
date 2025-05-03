/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:55:32 by gita              #+#    #+#             */
/*   Updated: 2025/05/03 17:53:32 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Return a pointer to the last occurrence of char c or NULL
if the character is not found. The terminating null byte is
considered part of the string, so that if c is specified as '\0',
function returns a pointer to the terminator */

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
