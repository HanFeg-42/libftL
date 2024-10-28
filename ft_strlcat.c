/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:45:36 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/24 15:34:39 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])     
        i++;
    return (i);
}

size_t ft_strlcat( char *dst, const char *src, size_t size )
{
    size_t i;
    size_t dstlen;

    i = 0;
    dstlen = ft_strlen(dst);
    if (size < dstlen)
        return (size + ft_strlen(src));
    while (i < size - dstlen - 1)
    {
        dst[dstlen + i] = src[i];
        i++;
    }
    dst[dstlen + i] = '\0';
    return (dstlen + ft_strlen(src));
}

int main()
{
    char dst[20] = "hello";
    char dst1[20] = "hello";
    char src[] = " samah";
    size_t a = strlcat(dst, src, 20);
    size_t b = ft_strlcat(dst1, src, 20);
    printf("strlcat\t====>%s| return %zu\n", dst, a);
    printf("ft_strlcat\t====>%s| return %zu\n", dst1, b);
}