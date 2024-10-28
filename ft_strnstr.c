/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:44:38 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/24 15:50:53 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    if (!little[i])
        return (big);
    while (i < n && big[i])
    {
        j = 0;
        while (big[i + j] == little[j])
        {
            j++;
            if(!little[j])
                return (big + i);
        }
        i++;
    }
    return (NULL);
}
/*
    The function returns a pointer to the first characters of str_2 in str_1 or null pointer if str_2 is not found in str_1.

    If str_2 is found as an empty string, str_1 is returned.
*/
int main()
{
    char s[] = "ana mgabla lbher laybher tirararar";
    char search[] = "bher";

    
}