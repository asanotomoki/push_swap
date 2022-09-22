/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:46:44 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/22 16:51:51 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_swap *to, t_swap *from)
{
	to->num = from->num;
}

void pa(t_swap *stack_a, t_swap *stack_b)
{
	push(stack_a, stack_b);
	ft_putendl_fd("pa", 1);
}

void pb(t_swap *stack_b, t_swap *stack_a)
{
	push(stack_b, stack_a);
	ft_putendl_fd("pb", 1);
}