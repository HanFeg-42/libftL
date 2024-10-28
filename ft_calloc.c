/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:28:08 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/26 16:31:07 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    void *a;

    a = malloc(nitems * size);
    if (!a)
        return (NULL);
    //ft_bzero(a, nitems);
    ft_memset(a, 0, nitems);
    return (a);
}

int main()
{
    char *c = ft_calloc(5, sizeof(char));
    char *c1 = calloc(5, sizeof(char));
    printf("%s\n",  c);
    printf("%s\n",  c1);
}