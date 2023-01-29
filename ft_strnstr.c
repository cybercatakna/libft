/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:31:53 by chrattan          #+#    #+#             */
/*   Updated: 2023/01/27 12:32:04 by chrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[x] != '\0' && x < len)
	{
		if (haystack[x] == needle[0])
		{
			while (needle[y] != '\0' \
					&& haystack[x + y] == needle[y] && x + y < len)
			{
				if (needle[y + 1] == '\0')
					return ((char *)&haystack[x]);
				y++;
			}
		}
		x++;
	}
	return (NULL);
}
