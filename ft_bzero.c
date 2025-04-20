/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:34:18 by gita              #+#    #+#             */
/*   Updated: 2025/04/20 22:42:11 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	s = ft_memset(s, '\0', n);
}

/*
#include<stdio.h>
int main()
{
	char egg[] = "Happy Easter!";
	printf("Before: %s\n", egg);
	ft_bzero(egg, 6);
	printf("After: %s\n", egg);
}*/
