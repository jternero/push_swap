/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:49:06 by jaimgreg-fe       #+#    #+#             */
/*   Updated: 2023/08/20 14:09:29 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_sorted(t_lst **stack)
{
	t_lst	*tmp;

	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (-1);
		tmp = tmp->next;
	}
	return (1);
}

int	is_order(t_lst **stack, int size)
{
	int	i;

	i = 0;
	while ((*stack)->index != 0)
	{
		rotate(stack);
		i++;
	}
	if (is_sorted(stack) == 1)
	{
		if (i > (size / 2))
		{
			if (size == 5 && i == 3)
				ft_printf("rra\n");
			ft_printf("rra\n");
		}
		else
			while (i-- > 0)
				ft_printf("ra\n");
		return (1);
	}
	else
		while (i-- > 0)
			reverse(stack);
	return (0);
}

void	reset_index(t_lst **stack)
{
	t_lst	*lst;

	lst = *stack;
	while (lst)
	{
		lst->index = -1;
		lst = lst->next;
	}
	ps_index(stack);
}

void	rotate_to_min(t_lst **stack, int size)
{
	int	i;

	i = 0;
	while ((*stack)->index != 0)
	{
		rotate(stack);
		i++;
	}
	if ((i > (size / 2)))
	{
		if (size == 5 && i == 3)
			ft_printf("rra\n");
		ft_printf("rra\n");
	}
	else
	{
		while (i > 0)
		{
			ft_printf("ra\n");
			i--;
		}
	}
}
