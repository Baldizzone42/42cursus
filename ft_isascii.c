/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:57:30 by jormoral          #+#    #+#             */
/*   Updated: 2024/04/10 13:21:21 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
    {
        return (1);
    }
    return (0);
}

#include <stdio.h>
int main (void)
{
    int c;

    c = ft_isascii('a');
    printf("\n\n%d\n\n\n",c);
    return(0);
}
