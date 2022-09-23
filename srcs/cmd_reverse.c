/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_reverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:55:13 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/24 05:24:18 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void reverse(t_swap *stack) 
{
	t_swap *last_elem;

	last_elem = ft_last_elem(stack);
	last_elem->prev->next = stack;
	stack->prev = last_elem->prev;
	ft_push_front(stack, last_elem);
}

void rra(t_swap *stack_a)
{
	reverse(stack_a);
	ft_putendl_fd("rra", 1);
}

void rrb(t_swap *stack_b)
{
	reverse(stack_b);
	ft_putendl_fd("rrb", 1);
}

void rrr(t_swap *stack_a, t_swap *stack_b)
{
	reverse(stack_a);
	reverse(stack_b);
	ft_putendl_fd("rrr", 1);
}