/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:33:57 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/24 01:01:34 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && *((unsigned char *)str1 + i) == *((unsigned char *)str2 + i))
        i++;
    return (*((unsigned char *)str1 + i) - *((unsigned char *)str2 + i));
}

int main()
{
    char *c1 = "hello my friend";
    char *c2 = "hello again";
    printf("ft_memcmp\t%d\n", ft_memcmp(c1, c2, 7));
    printf("memcmp\t\t%d\n", memcmp(c1, c2, 7));
}