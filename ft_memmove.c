/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:38:26 by smayti            #+#    #+#             */
/*   Updated: 2024/11/17 14:32:22 by smayti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	char	*dest;
	char	*s;

	dest = (char *)dst;
	s = (char *)src;
	if (dest == s)
		return (dest);
	if (dest < s)
	{
		while (len--)
		{
			*dest++ = *s++;
		}
	}
	else
	{
		dest = dest + len;
		s = s + len;
		while (len--)
		{
			*--dest = *--s;
		}
	}
	return (dst);
}
