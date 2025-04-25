/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:24:18 by gita              #+#    #+#             */
/*   Updated: 2025/04/25 16:09:58 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*team;
	size_t	whatever;
	
	team = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (team == NULL)
		return (NULL);
	else
	{
		team = ft_memmove(team, s1, ft_strlen(s1));
		whatever = ft_strlcat(team, s2, ft_strlen(s2) + 1);
	}
	return (team);
}
#include <stdio.h>
int main()
{
	char *mate1 = "abc";
	char *mate2 = "def";
	char *teammate = ft_strjoin(mate1, mate2);
	printf("%s\n", teammate);
}