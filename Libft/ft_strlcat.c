/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:12:51 by ofadhel           #+#    #+#             */
/*   Updated: 2023/02/04 14:21:43 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	d;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (slen);
	d = ft_strlen(dst);
	dlen = d;
	if (dstsize <= dlen)
		return (dstsize + slen);
	s = 0;
	while (src[s] && d + 1 < dstsize)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = 0;
	return (dlen + slen);
}
