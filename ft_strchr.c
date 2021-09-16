/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:16:18 by adubeau           #+#    #+#             */
/*   Updated: 2021/06/20 15:39:48 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*str1;
	size_t	i;

	i = 0;
	str1 = (char *)str;
	while (str[i] != '\0')
	{
		if ((char)str[i] == (char)ch)
			return (&str1[i]);
		i++;
	}
	if (ch == '\0')
		return (str1 + i);
	return (NULL);
}
