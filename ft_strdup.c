/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:39:01 by smayti            #+#    #+#             */
/*   Updated: 2024/11/17 14:32:13 by smayti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	len1;

	len1 = ft_strlen(s) + 1;
	dest = malloc(len1);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s, len1);
	return (dest);
}
