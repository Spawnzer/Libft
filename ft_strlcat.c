/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:31:58 by adubeau           #+#    #+#             */
/*   Updated: 2021/06/16 11:47:26 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	lenD;
	size_t	lenS;
	size_t	i;

	i = 0;
	lenD = ft_strlen(dest);
	lenS = ft_strlen(src);
	if (n == 0)
		return (lenS);
	if (n < lenD)
		lenS += n;
	else
		lenS += lenD;
	while (src[i] && (lenD + i) < n - 1)
	{
		dest[lenD + i] = src[i];
		i++;
	}
	dest[lenD + i] = '\0';
	return (lenS);
}
