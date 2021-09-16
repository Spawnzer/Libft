/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:47:27 by adubeau           #+#    #+#             */
/*   Updated: 2021/05/18 16:13:41 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str2 = (unsigned char *)str;
	while (i < n)
	{
		if (str2[i] == (unsigned char)c)
			return (str2 + i);
		i++;
	}
	return (NULL);
}
