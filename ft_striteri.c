/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:57:13 by gita              #+#    #+#             */
/*   Updated: 2025/05/03 15:37:12 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	ash;

	ash = 0;
	if (!s || !f)
		return ;
	while (s[ash])
	{
		f(ash, &s[ash]);
		ash++;
	}
}
