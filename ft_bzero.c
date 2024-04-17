/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:34:30 by jormoral          #+#    #+#             */
/*   Updated: 2024/04/14 18:31:07 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void ft_bzero(void *s, size_t n)
{
     unsigned char *str = s;
     size_t i;

     i = 0;
     while(i < n)
     {
        str[i] = '\0';
        i++;
     }
}
#include <stdio.h>
int main(void)
{
    char info[] = "Hola";
    size_t n = 2;
    ft_bzero(info ,n);
    printf("%s", info);
    return(0);
}

