/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:59:09 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/07 18:34:31 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void cmd_swap(t_stack *stack) 
{
	t_stack *first_elem;
	t_stack *third_elem;

	first_elem = ft_first_elem(stack);
	third_elem = first_elem->next->next;
	ft_push_front(stack, first_elem->next);
	first_elem->next = third_elem;
	third_elem->prev = first_elem;
}

void sa(t_stack *stack_a)
{
	if (!ft_check_stack_2elems(stack_a))
		return ;
	cmd_swap(stack_a);
	ft_putendl_fd("sa", 1);
}

void sb(t_stack *stack_b)
{
	if (!ft_check_stack_2elems(stack_b))
		return ;
	cmd_swap(stack_b);
	ft_putendl_fd("sb", 1);
}

void ss(t_stack *stack_a, t_stack *stack_b)
{
	if (!ft_check_stack_2elems(stack_a) && \
	!ft_check_stack_2elems(stack_b))
		return ;
	cmd_swap(stack_a);
	cmd_swap(stack_b);
	ft_putendl_fd("ss", 1);
}

void swap(t_stack *stack, int flag)
{
	if (flag == STACK_A)
		sa(stack);
	else
		sb(stack);
}

