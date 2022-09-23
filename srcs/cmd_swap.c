/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:59:09 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/24 05:52:19 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void swap(t_swap *stack) 
{
	t_swap *first_elem;
	t_swap *second_elem;

	first_elem = ft_first_elem(stack);
	second_elem = first_elem->next;
	first_elem->next = second_elem->next;
	ft_push_front(stack, second_elem);
}

void sa(t_swap *stack_a)
{
	swap(stack_a);
	ft_putendl_fd("sa", 1);
}

void sb(t_swap *stack_b)
{
	swap(stack_b);
	ft_putendl_fd("sb", 1);
}

void ss(t_swap *stack_a, t_swap *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
}