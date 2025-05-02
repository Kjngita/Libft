/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:47:43 by gita              #+#    #+#             */
/*   Updated: 2025/05/03 00:26:29 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*phoenix;
	unsigned int	fire;

	fire = 0;
	if (!s || !f)
		return (NULL);
	phoenix = ft_calloc(ft_strlen(s) + 1, 1); //SOMETHING HERE
	if (phoenix == NULL)
		return (NULL);
	while (*s)
	{
		phoenix[fire] = f(fire, s[fire]);
		fire++;
	}
	return (phoenix);
}
