/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:46:44 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/07 18:34:21 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *to, t_stack *from)
{
	ft_push_front(to, ft_pop_front(from));
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b != stack_b->next)
	{
		push(stack_a, stack_b);
		ft_putendl_fd("pa", 1);
	}
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a != stack_a->next)
	{
		push(stack_b, stack_a);
		ft_putendl_fd("pb", 1);
	}
}