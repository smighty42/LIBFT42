/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:38:22 by smayti            #+#    #+#             */
/*   Updated: 2024/11/17 14:32:23 by smayti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*d;
	const char	*s;

	s = (char *)src;
	d = dst;
	i = 0;
	while ((size_t)i < n && (src || dst))
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
