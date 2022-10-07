/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_reverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:55:13 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/07 19:21:58 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void cmd_reverse(t_stack *stack) 
{
	ft_push_front(stack, ft_pop_back(stack));
}

void rra(t_dswap *data)
{
	if (!ft_check_stack_2elems(data->a))
		return ;
	cmd_reverse(data->a);
	ft_putendl_fd("rra", 1);
}

void rrb(t_dswap *data)
{
	if (!ft_check_stack_2elems(data->b))
		return ;
	cmd_reverse(data->b);
	ft_putendl_fd("rrb", 1);
}

void rrr(t_dswap *data)
{
	if (!ft_check_stack_2elems(data->a) && \
	!ft_check_stack_2elems(data->b))
		return ;
	cmd_reverse(data->a);
	cmd_reverse(data->b);
	ft_putendl_fd("rrr", 1);
}