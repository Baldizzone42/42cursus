/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:37:04 by jormoral          #+#    #+#             */
/*   Updated: 2024/04/22 20:16:40 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr (const char *s, int c)
{
    c = (char)c;
   
    while(*s != '\0')
    {
        if(*s == c)
        {
            return ((char *)s);
        }
        s++;
    }
    if (*s == '\0' && c == '\0')
    {
        return ((char *)s);
    }
    return(NULL);
}