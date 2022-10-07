/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:59:09 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/07 19:23:01 by asanotomoki      ###   ########.fr       */
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

void sa(t_dswap *data)
{
	if (!ft_check_stack_2elems(data->a))
		return ;
	cmd_swap(data->a);
	ft_putendl_fd("sa", 1);
}

void sb(t_dswap *data)
{
	if (!ft_check_stack_2elems(data->b))
		return ;
	cmd_swap(data->b);
	ft_putendl_fd("sb", 1);
}

void ss(t_dswap *data)
{
	if (!ft_check_stack_2elems(data->a) && \
	!ft_check_stack_2elems(data->b))
		return ;
	cmd_swap(data->a);
	cmd_swap(data->b);
	ft_putendl_fd("ss", 1);
}
