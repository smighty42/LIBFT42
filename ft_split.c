/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:38:52 by smayti            #+#    #+#             */
/*   Updated: 2024/11/17 14:32:15 by smayti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;

	if (s == NULL)
	{
		return (0);
	}
	count = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (count);
}

static char	*ft_next_word(const char **s, char c)
{
	const char	*start;
	char		*word;
	size_t		len;

	len = 0;
	while (**s == c)
	{
		(*s)++;
	}
	start = *s;
	while (**s && **s != c)
	{
		len++;
		(*s)++;
	}
	word = ft_substr(start, 0, len);
	if (!word)
		return (NULL);
	return (word);
}

char	**ft_split(const char *s, char c)
{
	int		count;
	char	**new;
	int		i;

	if (s == NULL)
		return (NULL);
	count = ft_count_words(s, c);
	new = malloc(sizeof(char *) * (count + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		new[i] = ft_next_word(&s, c);
		if (new[i] == NULL)
		{
			while (i >= 0)
				free(new[i--]);
			free(new);
			return (NULL);
		}
		i++;
	}
	new[i] = NULL;
	return (new);
}
