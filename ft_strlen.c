/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:52:18 by jormoral          #+#    #+#             */
/*   Updated: 2024/04/14 17:06:11 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while(s[i] != '\0')
    {
        i++;   
    }
    return(i);
}

#include <stdio.h>

int main(void)
{
    char c[] = "funciona";


    printf ("%zu", ft_strlen (c));
    return (0);
}
