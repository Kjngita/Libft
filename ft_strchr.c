/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:58:31 by gita              #+#    #+#             */
/*   Updated: 2025/05/03 17:52:38 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Return a pointer to the 1st occurrence of char c or NULL
if the character is not found. The terminating null byte is
considered part of the string, so that if c is specified as '\0',
function returns a pointer to the terminator */

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
