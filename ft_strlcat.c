/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:39:12 by smayti            #+#    #+#             */
/*   Updated: 2024/11/17 14:32:10 by smayti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	str_len;
	size_t	left;
	size_t	i;

	dest_len = ft_strlen(dst);
	str_len = ft_strlen(src);
	if (dstsize <= dest_len)
		return (dstsize + str_len);
	else
	{
		left = (dstsize - dest_len - 1);
		i = 0;
		while (i < left && src[i] != '\0')
		{
			dst[dest_len + i] = src[i];
			i++;
		}
		dst[dest_len + i] = '\0';
	}
	return (str_len + dest_len);
}
