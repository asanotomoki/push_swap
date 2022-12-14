/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:46:44 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:23:02 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *to, t_stack *from)
{
	ft_push_front(to, ft_pop_front(from));
}

void	pa(t_dswap *data)
{
	if (data->b != data->b->next)
	{
		push(data->a, data->b);
		ft_push_back(data->ans, ft_new_elem(PA));
	}
}

void	pb(t_dswap *data)
{
	if (data->a != data->a->next)
	{
		push(data->b, data->a);
		ft_push_back(data->ans, ft_new_elem(PB));
	}
}
