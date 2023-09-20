/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:11:38 by jternero          #+#    #+#             */
/*   Updated: 2023/09/20 22:41:42 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


static int	ps_check_dup(t_lst *stack)
{
	int		tmp;
	t_lst	*dup;

	while (stack && stack->next)
	{
		tmp = stack->content;
		dup = stack;
		while (dup->next)
		{
			dup = dup->next;
			if (dup->content == tmp)
			{
				return (-1);
			}
		}
		stack = stack->next;
	}
	return (1);
}

static void	ps_stackclear(t_lst **stack)
{
	if (!stack || !(*stack))
		return ;
	ps_stackclear(&(*stack)->next);
	free(*stack);
	*stack = NULL;
}

static int	ps_initstack(int ac, char **av, t_lst **a_stack)
{
	int			i;
	int			j;
	char		**split;

	i = 1;
	while (i < ac)
	{
		j = 0;
		split = ft_split(av[i], ' ');
		if (!split[j])
			return (0);
		while (split[j])
		{
			if (ft_atol(split[j]) > INT_MAX
				|| ft_atol(split[j]) < INT_MIN)
				return (free_split(split), ps_stackclear(a_stack), 0);
			lst_addback(a_stack, lst_new(ft_atoi(split[j])));
			j++;
		}
		free_split(split);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_lst			*a_stack = NULL;
	t_lst			*b_stack = NULL;

	if (ac == 1)
		return (0);
	if (ps_initstack(ac, av, &a_stack) == 0 || ps_check_dup(a_stack) == -1)
	{
		ps_stackclear(&a_stack);
		return (ft_putstr_fd("Error\n", STDERR_FILENO));
	}
	else
	{
		ps_index(&a_stack);
		if (is_sorted(&a_stack) != 1)
		{
			if (lst_size(a_stack) <= 5)
				simple_sort(&a_stack, &b_stack);
			else
				radix_sort(&a_stack, &b_stack);
		}
	}
	ps_stackclear(&a_stack);
	ps_stackclear(&b_stack);
	return (0);
}
