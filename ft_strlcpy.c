/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:35:36 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/24 14:44:29 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy( char *dst, const char *src, size_t size )
{
    size_t i;
    
    i = 0;
    while (i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

int main()
{
    char dst[20] = "";
    char dst1[20] = "";
    char src[] = " samah";
    size_t a = strlcpy(dst, src, 20);
    size_t b = ft_strlcpy(dst1, src, 20);
    printf("strlcpy\t====>%s| return %zu\n", dst, a);
    printf("ft_strlcpy\t====>%s| return %zu\n", dst1, b);
}