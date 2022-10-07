/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:47:20 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/07 19:41:52 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void cmd_rotate(t_stack *stack) 
{
	ft_push_back(stack, ft_pop_front(stack));
}

void ra(t_dswap *data)
{
	if (!ft_check_stack_2elems(data->a))
		return ;
	cmd_rotate(data->a);
	ft_push_back(data->ans, ft_new_elem(RA));
}

void rb(t_dswap *data)
{
	if (!ft_check_stack_2elems(data->b))
		return ;
	cmd_rotate(data->b);
	ft_push_back(data->ans, ft_new_elem(RB));
}

void rr(t_dswap *data)
{
	if (!ft_check_stack_2elems(data->a) && \
	!ft_check_stack_2elems(data->b))
		return ;
	cmd_rotate(data->a);
	cmd_rotate(data->b);
	ft_push_back(data->ans, ft_new_elem(RR));
}

