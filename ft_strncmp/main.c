/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flolivei <flolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:45:00 by flolivei          #+#    #+#             */
/*   Updated: 2021/05/20 13:45:00 by flolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int        ft_strncmp(char *str); 

int        main(void)
{
    char *str = "abcdeF";
    int is_strncmp;

    is_strncmp = ft_strncmp(str);
    printf("str returns: %d\n", is_strncmp);
    return (0);
}

//https://www.geeksforgeeks.org/memmove-in-cc/
