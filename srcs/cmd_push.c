/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:46:44 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/24 06:32:41 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_swap *to, t_swap *from)
{
	t_swap *from_first_elem;

	from_first_elem = ft_first_elem(from);
	from_first_elem->next->prev = from;
	from->next = from_first_elem->next;
	ft_push_front(to, from_first_elem);
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