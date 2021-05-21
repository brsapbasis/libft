/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flolivei <flolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 23:16:16 by flolivei          #+#    #+#             */
/*   Updated: 2021/05/19 23:16:16 by flolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "..\libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *aux_dst;
	char *aux_src;

	aux_dst = dst;
	aux_src = (char *)src;
	if (dst > src) // se houver sobreposição faz o memmove
	{
		aux_dst = aux_dst + len - 1;
		aux_src = aux_src + len - 1;
		while (len >= 1)
		{
			*aux_dst = *aux_src;
			aux_dst--;
			aux_src--;
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);  // senão faça o memcopy
	return (dst);
}
