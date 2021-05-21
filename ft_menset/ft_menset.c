/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flolivei <flolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:29:24 by flolivei          #+#    #+#             */
/*   Updated: 2021/05/19 14:29:24 by flolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "..\libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *p;

    p = s;
    while (n--)
    {
        *p++ = (unsigned char)c;
    }
    return (s);
}
