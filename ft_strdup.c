/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 02:17:42 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/24 02:33:40 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
    char *ret;
    int i;

    ret = malloc(ft_strlen(str) * sizeof(const char) + 1);
    if (!ret)
        return (NULL);
    i = 0;
    while (str[i])
    {
        ret[i] = str[i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}

int main()
{
    char d[] = "1337";
    char *str = ft_strdup(d);
    printf("%s\n", str);
    
}