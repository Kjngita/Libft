/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gita <gita@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:04:02 by gita              #+#    #+#             */
/*   Updated: 2025/04/29 13:14:40 by gita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	skip_this(char const *s, char c)
{
	int	step;

	step = 0;
	while(s)
	{
		if (s[step] == c)
			return (1);
		step++;
	}
	return (0);
}
int	one_word_len(char const *s, char c)
{
	int	foot;

	foot = 0;
	while (s[foot] != 0 || s[foot] != c)
		foot++;
	return (foot);
}
int	number_of_words(char const *s, char c)
{
	int	number;
	int	start_word;

	number = 0;
	start_word = 0;
	while (s)
	{

		if (!skip_this(s, c) && start_word == 0)
			{
				start_word = 1;
				number++;
			}
		if (skip_this(s, c))
			start_word = 0;
		s++;
	}
	return (number);
}
void	*release(char **arr_of_pointers)
{
	int	m;

	m = 0;
	while (arr_of_pointers[m])
	{
		free (arr_of_pointers[m]);
		m++;
	}
	free (arr_of_pointers);
	return (NULL);
}
char	**ft_split(char const *s, char c)
{
	char	**feather;
	int		i;

	i = 0;
	feather = malloc(number_of_words(s, c) * sizeof(char *) + 1);
	if (feather == NULL)
		return (NULL);
	while (s)
	{
		if (!skip_this(s, c))
		{
			feather[i] = ft_substr(s, 0, one_word_len(s, c));
			if (feather[i] == 0)
				return (release(feather));
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