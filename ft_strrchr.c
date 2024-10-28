/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:12:14 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/22 13:13:25 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    int tmp;

    i = 0;
    tmp = 0;
    while (s[i])
    {
        if (s[i] == c)
            tmp = i;
        i++;
    }
    if (!tmp)
        return (char *)s + i;
    return (char *)s + tmp;
}

/*
char *ft_strrchr(const char *s, int c)
{
    char *p;
    int i = 0;
    int tmp = 0 ;

    p = (char*)s;
    while (p[i])
    {
        if (p[i] == c)
            tmp = i;
        i++;
    }
    if (!tmp)
        return p + i;
    return p + tmp;
}
*/

int main()
{
    const char *s = "hello hallaloya les fiiiiiii";
    printf("Hello World\n");
    printf("%s ====> %s\n", s, ft_strrchr(s, 'l'));

    return 0;
}