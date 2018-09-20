/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftait <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 13:29:35 by ftait             #+#    #+#             */
/*   Updated: 2017/06/25 13:30:13 by ftait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	char	*new;

	new = (char *)ft_memalloc(sizeof(char) * size);
	ft_memcpy(new, ptr, size);
	ft_memdel(&ptr);
	return (new);
}
