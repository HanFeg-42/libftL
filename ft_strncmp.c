/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:35:08 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/22 15:51:57 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
        i++;
    return (s1[i] - s2[i]);
}



int main()
{
    const char *s1 = "hello";
    const char *s2 = "hello";
    printf("strncmp ======> %d\n", strncmp(s1, s2, 4));
    printf("strncmp ======> %d\n", ft_strncmp(s1, s2, 4));
}