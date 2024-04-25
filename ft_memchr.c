/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:43:59 by jormoral          #+#    #+#             */
/*   Updated: 2024/04/24 21:40:37 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const char *str;
    char p;
    size_t i;

    str = (const char*)s;
    p = (char)c;
    i = 0;
    while (i < n)
    {
        if (str[i] == p)
        {
            return (&((void *)str)[i]);
        }
        i++;
    }
    return (NULL);
}