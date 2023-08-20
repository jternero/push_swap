/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:21:21 by jaimgreg-fe       #+#    #+#             */
/*   Updated: 2023/08/14 18:37:05 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	reverse(t_lst **stack)
{
	t_lst	*lst;

	if (!(*stack) || !(*stack)->next)
		return ;
	lst = lst_last(*stack);
	lst->prev->next = NULL;
	lst->prev = NULL;
	lst->next = *stack;
	(*stack)->prev = lst;
	*stack = (*stack)->prev;
}

void	do_rra(t_lst **stack)
{
	reverse(stack);
	ft_printf("rra\n");
}

void	do_rrb(t_lst **stack)
{
	reverse(stack);
	ft_printf("rrb\n");
}

void	do_rrr(t_lst **a_stack, t_lst **b_stack)
{
	reverse(a_stack);
	reverse(b_stack);
	ft_printf("rrr\n");
}
