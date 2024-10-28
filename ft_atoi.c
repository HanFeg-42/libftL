/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:42:38 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/22 09:42:41 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int ret;

    i = 0;
    sign = 1;
    ret = 0;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        ret = ret * 10 + str[i] - '0';
        i++;
    }
    return (ret * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("atoi : %d\nft_atoi : %d\n", atoi("123"), ft_atoi("123"));
    printf("atoi : %d\nft_atoi : %d\n", atoi(" \n -123.26"), ft_atoi(" \n -123.26"));
}
