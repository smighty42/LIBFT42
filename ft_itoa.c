/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:38:06 by smayti            #+#    #+#             */
/*   Updated: 2024/11/17 14:32:26 by smayti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i = 1;
		n = -n;
	}
	else if (n == 0)
	{
		return (1);
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	l;
	size_t	len;

	l = n;
	len = ft_size(l);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (l < 0)
	{
		l *= -1;
		str[0] = '-';
	}
	if (l == 0)
		return (str[0] = '0', str);
	while (l > 0)
	{
		str[len - 1] = (l % 10) + '0';
		l = l / 10;
		len--;
	}
	return (str);
}
