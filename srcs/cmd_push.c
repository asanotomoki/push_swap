/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:46:44 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/07 19:20:23 by asanotomoki      ###   ########.fr       */
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
		ft_putendl_fd("pa", 1);
	}
}

void	pb(t_dswap *data)
{
	if (data->a != data->a->next)
	{
		push(data->b, data->a);
		ft_putendl_fd("pb", 1);
	}
}