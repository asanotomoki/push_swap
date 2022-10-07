/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_reverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:55:13 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/07 18:34:25 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void cmd_reverse(t_stack *stack) 
{
	ft_push_front(stack, ft_pop_back(stack));
}

void rra(t_stack *stack_a)
{
	if (!ft_check_stack_2elems(stack_a))
		return ;
	cmd_reverse(stack_a);
	ft_putendl_fd("rra", 1);
}

void rrb(t_stack *stack_b)
{
	if (!ft_check_stack_2elems(stack_b))
		return ;
	cmd_reverse(stack_b);
	ft_putendl_fd("rrb", 1);
}

void rrr(t_stack *stack_a, t_stack *stack_b)
{
	if (!ft_check_stack_2elems(stack_a) && \
	!ft_check_stack_2elems(stack_b))
		return ;
	cmd_reverse(stack_a);
	cmd_reverse(stack_b);
	ft_putendl_fd("rrr", 1);
}

void reverse(t_stack *stack, int flag)
{
	if (flag == STACK_A)
		rra(stack);
	else
		rrb(stack);
}