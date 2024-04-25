/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:38:12 by jormoral          #+#    #+#             */
/*   Updated: 2024/04/24 19:09:00 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
