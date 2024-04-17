/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:39:35 by jormoral          #+#    #+#             */
/*   Updated: 2024/04/15 13:10:03 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *a;
    char *b;
    size_t i;

    a = (char *)dst;
    b = (char *)src;
    i = 0;
    while (i < n)
    {
        a[i] = b[i];
        i++;   
    }
    return(dst);
}

int main(void)
{
    char destino[] = "Muy bienP";
    char source[] = "Hola que tal";
    size_t n = 10;
    printf("%s", ft_memcpy(destino, source, n));
    return(0);
}