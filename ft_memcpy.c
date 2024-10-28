/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:04:32 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/26 16:46:42 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        *((unsigned char *)dest_str + i) = *((unsigned char *)src_str + i);
        i++;
    }
    return (dest_str);
}
// dest_str : where the content is to be copied
// src_str : source of data to be copied
// n : bytes to be copied

// int main()
// {
//     char dst[10] = "" ;
//     char dst1[10] = "" ;
//     char src[] = "salam";
//     printf("dst before\t%s\n",dst);
//     memcpy(dst, src, 4);
//     ft_memcpy(dst1, src, 4);
//     printf("memcpy\t%s\n",dst);
//     printf("ft_memcpy\t%s\n",dst1);

// }