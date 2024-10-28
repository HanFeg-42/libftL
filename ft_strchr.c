/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:33:56 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/25 02:26:55 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char *p;

    p = (char *)s;
    while (*p && p != c)
      p++;
    if(*p == c)
      return (p);
     return (NULL);
}


#include <stdio.h>

int main()
{
    const char *s = "hello";
    const char *s1 = "hello";
    printf("Hello World\n");
    printf("%s ====> %s\n", s, ft_strchr(s, '\0'));
    printf("%s ====> %s\n", s1, strchr(s1, '\0'));

    return 0;
}