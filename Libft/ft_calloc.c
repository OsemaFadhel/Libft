/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:15:14 by ofadhel           #+#    #+#             */
/*   Updated: 2023/02/08 12:27:35 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	p = (void *)malloc(nmemb * size);
	if (!p)
	{
		return (NULL);
	}
	ft_bzero(p, (nmemb * size));
	return (p);
}
