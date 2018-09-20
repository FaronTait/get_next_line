/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftait <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 13:51:33 by ftait             #+#    #+#             */
/*   Updated: 2017/06/25 13:51:35 by ftait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkwhitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
			|| c == '\v' || c == '\f' || c == '\r');
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	n;
	char	*str;

	i = 0;
	n = ft_strlen(s);
	while (ft_checkwhitespace(s[i]))
		i++;
	while (ft_checkwhitespace(s[n - 1]))
		n--;
	if (n < i)
		n = i;
	str = ft_strnew(n - i);
	if (str == NULL)
		return (NULL);
	return (ft_strncpy(str, s + i, n - i));
}
