/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flolivei <flolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:28:31 by flolivei          #+#    #+#             */
/*   Updated: 2021/05/19 14:28:31 by flolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/*
** Part one - Libc functions
*/

void            *ft_memset(void *s, int c, size_t n);
void             ft_bzero(void *s, size_t n);
void            *ft_memcpy(void *dest, const void *src, size_t n);
void            *ft_memccpy(void *dest, const void *src, int c, size_t n);

#endif
