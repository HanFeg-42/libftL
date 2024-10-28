/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:21:51 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/26 16:35:34 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    size_t i;
   
    i = 0;
    while (i < n)
    {
        *((unsigned char *)str + i) = (unsigned char)c;
        i++;
    }
    return (str);
}

// int main ()
// {
//     char s[] = "hello my name is hanane";
//     char s1[] = "hello my name is hanane";
//     ft_memset(s, 'c', 12);
//     memset(s1, 'c', 12);
//     printf("%s\n",s);
//     printf("%s",s1);
// }

/*This function is used to fill a contiguous block 
of memory with a specific value. It also converts 
the value of a character to unsigned character and 
copies it into each of first n character of the 
object pointed by the given string. If the n is 
larger than string size, it will be undefined.*/