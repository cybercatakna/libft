/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:25:28 by chrattan          #+#    #+#             */
/*   Updated: 2022/11/13 18:13:45 by chrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;

	a = 0;
	if (dstsize)
	{
		while (a < dstsize - 1 && src[a])
		{
			dst[a] = src[a];
			a++;
		}
		dst[a] = 0;
	}
	a = 0;
	while (src[a])
		a++;
	return (a);
}
