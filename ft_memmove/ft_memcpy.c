/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mencpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flolivei <flolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:59:54 by flolivei          #+#    #+#             */
/*   Updated: 2021/05/19 16:59:54 by flolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "..\libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t		i;
	char		*aux_dst;
	const char	*aux_src;

	aux_dst = dest;
	aux_src = src;
	i = 0;
	while (i < n && aux_dst[i] != aux_src[i])
	{
		aux_dst[i] = aux_src[i];
		i++;
	}
	return (aux_dst);
}
