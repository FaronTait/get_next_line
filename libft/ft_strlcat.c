/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftait <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 13:42:14 by ftait             #+#    #+#             */
/*   Updated: 2017/06/25 13:42:16 by ftait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	len;

	i = 0;
	n = ft_strlen(dst);
	len = ft_strlen(src) + n;
	if (size < n)
		return (ft_strlen(src) + size);
	while (src[i] && (size > n + 1))
		dst[n++] = src[i++];
	dst[n] = '\0';
	return (len);
}
