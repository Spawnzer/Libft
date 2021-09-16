/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:14:38 by adubeau           #+#    #+#             */
/*   Updated: 2021/06/16 20:56:13 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	i;
	char	*str1;
	char	*temp;

	temp = NULL;
	i = 0;
	str1 = (char *)str;
	while (str1[i])
	{
		if (str1[i] == (char)ch)
			temp = (char *)&str[i];
		i++;
	}
	if ((char)ch == str1[i])
		return ((char *)&str1[i]);
	return (temp);
}
