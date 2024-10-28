/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 00:38:56 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/26 16:42:21 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if (dest <= src || dest >= src + n)
        ft_memcpy(dest, src, n);
    else
        while(n)
        {
            n--;
            d[n] = s[n];
        }   
    return (dest);
}

int main()
{
    char src[50] = "abcdef";
    char src1[50] = "abcdef";
    char dst[50] = "";
    
    char *s = ft_memmove(src + 2, src, 5);
    char *s1 = memmove(src1 + 2, src1, 5);
    
    printf("ft_memmove ==> %s\n", s);
    printf("memmove ==> %s\n", s1);

    return 0;
}