/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:32:23 by gita              #+#    #+#             */
/*   Updated: 2025/04/24 15:14:45 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			ruler;
	unsigned char	*new;

	ruler = nmemb * size;
	if (ruler == 0)
		return (NULL);
	
}
