/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flolivei <flolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:38:29 by flolivei          #+#    #+#             */
/*   Updated: 2021/05/19 15:38:29 by flolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_bzero(void * s, size_t n);

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
    printf("bzero is: \n");
    ft_bzero(arr, sizeof(arr));
    printArray(arr, 4);
    return (0);
}
