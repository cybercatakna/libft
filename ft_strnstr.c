/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:08:52 by chrattan          #+#    #+#             */
/*   Updated: 2023/01/16 20:08:53 by chrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnsrt(const char *haystack, const char *needle, size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0' && a < n)
	{
		if (haystack[a] == needle[b])
		{
			while (haystack[a + b] == needle[b] && a + b < n)
			{
				if (needle[a + 1] == '\0')
					return ((char *)haystack + a);
				b++;
			}
			b = 0;
		}
		a++;
	}
	return (NULL);
}
