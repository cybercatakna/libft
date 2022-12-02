/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 01:36:13 by chrattan          #+#    #+#             */
/*   Updated: 2022/11/14 05:51:34 by chrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = 0;
	c %= 256;
	while (s[a])
		a++;
	while (s[a] >= 0)
	{
		if (s[a] == c)
			return ((char *)s + a);
		a--;
	}
	if (s[a] == c)
		return ((char *)s + a);
	return (0);
}
