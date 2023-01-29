/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:40:52 by admin             #+#    #+#             */
/*   Updated: 2023/01/25 13:52:37 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	const char	*diy;

	diy = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *diy && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
