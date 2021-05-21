/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flolivei <flolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:45:09 by flolivei          #+#    #+#             */
/*   Updated: 2021/05/20 13:45:09 by flolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *str)
{
	int is_strncmp;
	int counter;
	int exit_loop;

	exit_loop = 1;
	counter = 0;
	while (str[counter] != '\0' && exit_loop == 1)
	{
		if ((str[counter] >= 'A' && str[counter] <= 'Z') ||
		(str[counter] >= 'a' && str[counter] <= 'z'))
		{
			is_strncmp = 1;
		}
		else
		{
			is_strncmp = 0;
			exit_loop = 0;
		}
		counter++;
	}
	return (is_strncmp);
}

int strncmp(char *s, char *t, int n)
{

     if(strlen(s) == strlen(t)) {

         while(*s == *t && *s && n) 
            n--, s++, t++;

         if(!n) 
             return 0; /* same length and same characters */
         else 
             return 1; /* same length, doesnt has the same characters */         
     }
     else
        return strlen(s) - strlen(t);
}