/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:25:21 by adubeau           #+#    #+#             */
/*   Updated: 2021/07/05 11:38:04 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sc;
	size_t			i;

	i = 0;
	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dst > sc)
		while (n-- > 0)
			dst[n] = sc[n];
	else
	{
		while (i < n)
		{
			dst[i] = sc[i];
			i++;
		}
	}
	return (dest);
}
