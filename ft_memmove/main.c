/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flolivei <flolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:50:31 by flolivei          #+#    #+#             */
/*   Updated: 2021/05/19 21:50:31 by flolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "..\libft.h"

void *ft_memmove(void *dest, const void *src, size_t n);
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
    char arrsrc[] = "Start Stop";
    char arrdst[] = "";
    printf("Valor antes do memmove \n");
    printArray(arrdst, 6);
    ft_memmove(arrdst, arrsrc, sizeof(arrdst));
    printf("Valor depois do memmove \n");
    printArray(arrdst, 6);
    return (0);
}
// exemplo da string
// Start Stop
// artrt Stop
