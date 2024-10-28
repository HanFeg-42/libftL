/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:02:32 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/23 11:52:22 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        *((unsigned char *)s + i) = 0;
        i++; 
    }
}
// Casting void *: The pointer s should be cast
// to unsigned char * to ensure that the 
// assignment works correctly with byte-level access.

int main()
{
    char c[] = "hello hanane";
    ft_bzero(c,5);
    printf("%s",c);
}