/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:17:33 by gita              #+#    #+#             */
/*   Updated: 2025/04/25 15:28:28 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*baby;

	if (s == 0)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	baby = malloc((len + 1) * sizeof(char));
	if (baby == NULL)
		return (NULL);
	else
	{
		if (ft_strlen(s) - start < len)
			len = ft_strlen(s) - start;
		baby = ft_memcpy(baby, s + start, len);
	}
	return (baby);
}
