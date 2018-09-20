/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftait <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 13:22:38 by ftait             #+#    #+#             */
/*   Updated: 2017/06/25 13:22:40 by ftait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s1;
	char	tmp;

	s1 = (char *)s;
	tmp = (unsigned char)c;
	while (n--)
	{
		if (*s1 == tmp)
			return (s1);
		s1++;
	}
	return (0);
}
