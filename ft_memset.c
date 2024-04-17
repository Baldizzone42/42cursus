/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:27:18 by jormoral          #+#    #+#             */
/*   Updated: 2024/04/12 18:49:00 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *str;
    size_t i;

    str = b;
    i = 0;
    while(i < len)
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return(b);
}
#include <stdio.h>
int main(void)
{
    char info[4] = "hola";
    int c = 'j';
    size_t len = 5;
    printf("%s", ft_memset(info, c, len));
    return(0);
}