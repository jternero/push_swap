/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:16:58 by jternero          #+#    #+#             */
/*   Updated: 2023/08/14 16:02:34 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{	
		lst = lst->next;
		i++;
	}
	return ((int)i);
}

/*
esta funcion cuenta los nodos de la lista
*/