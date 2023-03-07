/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:24:29 by ofadhel           #+#    #+#             */
/*   Updated: 2023/02/08 21:55:42 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	str;

	str = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == str)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == str)
		return ((char *)(s + i));
	return (0);
}
