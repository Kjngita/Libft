/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:04:02 by gita              #+#    #+#             */
/*   Updated: 2025/04/29 14:16:53 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip_this(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}
static int	one_word_len(char const *s, char c)
{
	int	foot;

	foot = 0;
	while (*s && *s != c)
	{
		s++;
		foot++;	
	}
	return (foot);
}
static int	number_of_words(char const *s, char c)
{
	int	number;
	int	start_word;

	number = 0;
	start_word = 0;
	while (*s && s)
	{

		if (!skip_this(*s, c) && start_word == 0)
			{
				start_word = 1;
				number++;
			}
		if (skip_this(*s, c))
			start_word = 0;
		s++;
	}
	return (number);
}
static void	*release(char **arr_of_pointers, int m)
{
	while (arr_of_pointers[m])
	{
		free (arr_of_pointers[m]);
		m--;
	}
	free (arr_of_pointers);
	return (NULL);
}
char	**ft_split(char const *s, char c)
{
	char	**feather;
	int		i;

	i = 0;
	feather = malloc((number_of_words(s, c) + 1) * sizeof(char *));
	if (feather == NULL)
		return (NULL);
	while (s)
	{
		if (!skip_this(*s, c))
		{
			feather[i] = ft_substr(s, 0, one_word_len(s, c));
			if (feather[i] == 0)
				return (release(feather, i));
			s += one_word_len(s, c);
			i++;
		}
		s++;
	}
	feather[i] = NULL;
	return (feather);
}

int main ()
{
	char *cake = "  flour   sugar    bksd     ";
	char **slice = ft_split(cake, ' ');
	__builtin_printf("%s\n", slice[0]);
	__builtin_printf("%s\n", slice[1]);
	__builtin_printf("%s\n", slice[2]);
}