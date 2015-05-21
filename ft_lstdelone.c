/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 17:25:37 by jpiniau           #+#    #+#             */
/*   Updated: 2014/11/24 16:12:43 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;

	lst = NULL;
	if (alst && *alst && del)
	{
		del((*alst)->content, (*alst)->content_size);
		(*alst)->content = NULL;
		(*alst)->content_size = 0;
		free (*alst);
		*alst = lst;
	}
}
