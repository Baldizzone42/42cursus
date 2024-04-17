/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:28:43 by jormoral          #+#    #+#             */
/*   Updated: 2024/04/10 11:47:59 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    if(c >= 97 && c <= 122)
    {
        c -= 32;
        return(c);
    }
    return(c);
}
#include <stdio.h>

int main(void)
{
    char c;

    c = ft_toupper('l');
    printf("%c", c);
    return(0);
}