/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:23:39 by sataide           #+#    #+#             */
/*   Updated: 2026/10/30 16:03:00 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **tab, int l)
{
	while (l >= 0)
	{
		free (tab[l]);
		l--;
	}
	free (tab);
}

static char	*fill_word(char *str, int i, int j)
{
	char	*word;
	int		k;

	k = 0;
	word = ft_calloc(((j) + 1), sizeof(char));
	if (!word)
		return (NULL);
	while (k < j)
	{
		word[k] = str[i];
		k++;
		i++;
	}
	word[k++] = '\0';
	return (word);
}

static int	count_words(const char *s, char c)
{
	int	is_in_word;
	int	n_words;
	int	i;

	is_in_word = 0;
	n_words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && is_in_word == 0)
		{
			is_in_word = 1;
			n_words++;
		}
		else if (s[i] == c)
			is_in_word = 0;
		i++;
	}
	return (n_words);
}

static char	**resulter(char const *s, char c, char **tab)
{
	int		j;
	int		k;
	int		l;

	k = 0;
	l = 0;
	while (s[k])
	{
		while (s[k] == c)
			k++;
		j = 0;
		while (s[k] != c && s[k] != '\0' && ++j)
			k++;
		if (j == 0)
			continue ;
		tab[l] = fill_word((char *)s, (k - j), j);
		if (!tab[l])
		{
			free_all(tab, l);
			return (NULL);
		}
		l++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	n_words;

	if (!s)
		return (NULL);
	n_words = count_words((char *)s, c);
	tab = ft_calloc((n_words + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	if (resulter((char *)s, c, tab) == NULL)
		return (NULL);
	tab[n_words] = NULL;
	return (tab);
}
