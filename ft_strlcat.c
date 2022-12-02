/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:41:37 by chrattan          #+#    #+#             */
/*   Updated: 2022/11/13 15:55:19 by chrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;

	s = 0;
	d = 0;
	while (dst[d] && d < dstsize)
		d++;
	s = d;
	while (src[d - s] && (d + 1) < dstsize)
	{
		dst[d] = src[d - s];
		d++;
	}
	if (s < dstsize)
		dst[d] = '\0';
	return (s + ft_strlen(src));
}
