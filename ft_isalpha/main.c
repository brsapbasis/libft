/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flolivei <flolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:47:31 by flolivei          #+#    #+#             */
/*   Updated: 2021/05/20 13:47:31 by flolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int        ft_isalpha(char *str);

int        main(void)
{
    char *str = "abcdeF";
    int is_alphabetic;

    is_alphabetic = ft_isalpha(str);
    printf("str returns: %d\n", is_alphabetic);
    return (0);
}
