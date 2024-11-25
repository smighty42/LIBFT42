/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:39:43 by smayti            #+#    #+#             */
/*   Updated: 2024/11/17 14:32:00 by smayti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	strlen;
	unsigned int	i;

	i = 0;
	strlen = ft_strlen(s);
	if (!s)
		return (0);
	if (strlen < start)
		len = 0;
	if (strlen - start < (unsigned int)len)
		len = (size_t)(strlen - start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	while ((size_t)i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
