/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:55:59 by chrattan          #+#    #+#             */
/*   Updated: 2022/11/13 16:39:11 by chrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	c %= 256;
	while (s[a])
	{
		if (s[a] == c)
			return ((char *)s + a);
		a++;
	}
	if (s[a] == c)
		return ((char *)s + a);
	return (0);
}
