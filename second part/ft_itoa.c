/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 04:19:03 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/25 14:39:46 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



char *ft_itoa(int n)
{
        char *ret;
        int i;
        long nbr;

        i = 0;
        ret = malloc(1);
        if(!ret)
            return (NULL);
        if(n < 0)
        {
            ret[i++] = '-';
            n = -n;
        } 
        while (d < n)
            d =* 10;
        d =/ 10;
        while (n)
        {
            ret[i++] = n / d;
            n =% d;
            d =/ 10;
        }
}