/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_reverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:55:13 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/22 16:55:14 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void rotate(t_swap *stack) 
{
	stack->num = 10;	
}

void ra(t_swap *stack_a)
{
	rotate(stack_a);
	ft_putendl_fd("ra", 1);
}

void rb(t_swap *stack_b)
{
	rotate(stack_b);
	ft_putendl_fd("rb", 1);
}

void rr(t_swap *stack_a, t_swap *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
}