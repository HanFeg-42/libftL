/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:15:03 by hfegrach          #+#    #+#             */
/*   Updated: 2024/10/28 21:23:34 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *current;

    if(!lst || !f || !del)
        return (NULL);
    new = malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    current = lst;
    while (current)
    {
        new->content = f(current->content);
        current = current->next;
    }
    return (NULL);
}