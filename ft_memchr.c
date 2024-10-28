/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:28:22 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/23 13:33:54 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// str − This is the pointer to the memory block where the search is performed.

// c − This is the value to be passed as an int, but the function performs a byte per byte search using the unsigned char conversion of this value.

// n − This is the number of bytes to be analyzed.
#include <stdio.h>
void *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n) // what if n > ft_strlen(str)
    {
        if (*((unsigned char *)str + i) == (unsigned char)c)
            return ((void *)str + i);
        i++;
    }
    return (NULL);
}

int main()
{
    const char *s = "hello world";
    printf("Hello World\n");
    printf("%s ====> %s\n", s, (char *)ft_memchr(s, 'o', 10));

    return 0;
}