/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:47:20 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/26 17:44:01 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void cmd_rotate(t_stack *stack) 
{
	if (ft_check_stack_2elems(stack))
		ft_push_back(stack, ft_pop_front(stack));
}

void ra(t_stack *stack_a)
{
	cmd_rotate(stack_a);
	ft_putendl_fd("ra", 1);
}

void rb(t_stack *stack_b)
{
	cmd_rotate(stack_b);
	ft_putendl_fd("rb", 1);
}

void rr(t_stack *stack_a, t_stack *stack_b)
{
	cmd_rotate(stack_a);
	cmd_rotate(stack_b);
	ft_putendl_fd("rr", 1);
}

void rotate(t_stack *stack, int flag)
{
	if (flag == STACK_A)
		ra(stack);
	else
		rb(stack);
}

