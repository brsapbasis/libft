/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flolivei <flolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:11:50 by flolivei          #+#    #+#             */
/*   Updated: 2021/05/19 14:11:50 by flolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "..\libft.h"

void    *ft_memset(void *s, int c, size_t n);

void    printArray(char *arr, int n)
{
    int i= 0;
    while (i < n)
    {
        printf("%c", arr[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    char arr[] = "FLAVIO";
    printArray(arr, 4);
    ft_memset(arr, '3', sizeof(arr));
    printArray(arr, 4);
    return (0);
}
