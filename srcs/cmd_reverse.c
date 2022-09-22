/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_reverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:55:13 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/22 16:58:52 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void reverse(t_swap *stack) 
{
	stack->num = 10;	
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