/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:57:00 by jaimgreg-fe       #+#    #+#             */
/*   Updated: 2023/08/20 14:20:49 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../include/push_swap.h"

static void	push(t_lst **a_stack, t_lst **b_stack)

{
	t_lst	*tmp;

	if (!b_stack)
		return ;
	tmp = (*b_stack)->next;
	lst_addfront(a_stack, *b_stack);
	*b_stack = tmp;
	if (*b_stack)
		(*b_stack)->prev = NULL;
}

void	do_pa(t_lst **a_stack, t_lst **b_stack)
{
	push(a_stack, b_stack);
	ft_printf("pa\n");
}

void	do_pb(t_lst **a_stack, t_lst **b_stack)
{
	push(b_stack, a_stack);
	ft_printf("pb\n");
}
