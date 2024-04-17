/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:38:12 by jormoral          #+#    #+#             */
/*   Updated: 2024/04/15 19:09:08 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *a;
    const char *b;
    size_t i;

    a = (char *)dst;
    b = (const char *)src;
    i = 0;

    if (b < a)
    {
        i = len;
        while (i > 0)
        {
            i--;
            a[i] = b[i];
        }
    }
    else
    {
        while (i < len)
        {
            a[i] = b[i];
            i++;
        }
    }
    return(dst);
}

int main(void)
{
    char destino[] = "Muy bienP";
    char source[] = "Hola asl";
    size_t len = 5;
    printf("%s", memmove(destino, source, len));
    return(0);
}