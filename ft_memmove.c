/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 23:32:56 by gita              #+#    #+#             */
/*   Updated: 2025/04/21 15:11:35 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char*)dest;
	s = (const unsigned char*)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			d[i] = s[i];	
			i--;
		}
	}
	return (dest);
}
#include<stdio.h>
#include<bsd/string.h>
int main()
{
	char w[50] = "Twinkle twinkle little star";
	char j[50] = "Twinkle twinkle little star";
	printf("%s Operating subject\nTest ", w);
	ft_memmove(w + 2, w, 10);
	memmove(j + 2, j, 10);
	printf("%s Own func\n", w);
	printf("%s Orig func\n", j);
}
