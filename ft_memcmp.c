/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:40:47 by jormoral          #+#    #+#             */
/*   Updated: 2024/04/25 18:47:29 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *dst;
    const char *src;
    size_t i;
    

    dst = (const char *)s1;
    src = (const char *)s2;
    i = 0;
    while(i < n && dst[i] != '\0' && src[i] != '\0')
    {
        if (dst[i] == src[i])
        {
            return(0);
        }
        else
        {
            return (dst[i] - src[i]);
        }
    }
    return(NULL);
}